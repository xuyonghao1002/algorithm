#pragma once
#include <string>
#include <set>
#include "Folder.h"
using namespace std;

class Message
{
	friend class Folder;
public:
	//构造函数
	explicit Message(const string& str = string()) :contents(str) {}
	//拷贝构造函数
	Message(const Message&);
	//拷贝赋值运算符
	Message& operator = (const Message&);
	~Message();

	void save(Folder&);
	void remove(Folder&);
private:
	string contents;	//实际消息文本
	set<Folder*> folders;
	void add_to_Folders(const Message&);
	void remove_from_Folders();
};

void Message::save(Folder& f)
{
	folders.insert(&f);
	f.addMsg(this);
}

void Message::remove(Folder& f)
{
	folders.erase(&f);
	f.remMsg(this);
}

void Message::add_to_Folders(const Message& m)
{
	set<Folder*>::iterator iter = m.folders.begin();
	for (; iter != m.folders.end(); ++iter)
	{
		(*iter)->addMsg(this);
	}
	/*for (auto f : m.folders)
		f->addMsg(this);*/
}

//拷贝构造函数
Message::Message(const Message& m) :contents(m.contents), folders(m.folders)
{
	add_to_Folders(m);
}

void Message::remove_from_Folders()
{
	for (auto f : folders)
		f->remMsg(this);
}

//析构函数
Message::~Message()
{
	remove_from_Folders();
}

//拷贝赋值运算符
Message& Message::operator=(const Message& m)
{
	remove_from_Folders();
	contents = m.contents;
	folders = m.folders;
	add_to_Folders(m);
	return *this;
}