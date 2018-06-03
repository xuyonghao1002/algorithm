#pragma once
#include <set>
#include "Message.h"
using namespace std;

class Folder
{
public:
	Folder() = default;
	void addMsg(Message* p) { messages.insert(p); }
	void remMsg(Message* p) { messages.erase(p); }
private:
	set<Message*> messages;
};