#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

string sub(string str)
{
	int len = str.length();
	string res;
	for (int i = 0; i < len; ++i)
	{
		if (str[i] != 'x')
			res += str[i];
		else
			break;
	}
	return res;
}

int main()
{
	int n, numOfRule, numOfReq;
	vector<string> vecReq;
	map<string, string> rule;
	string phonenum, attribution, phonenumForReq, temp;
	cin >> n;
	for (int i = 0; i < 2; i++)
	{
		cin >> numOfRule;
		for (int j = 0; j < numOfRule; ++j)
		{
			cin >> phonenum >> attribution;
			temp = sub(phonenum);
			rule[temp] = attribution;
		}
		cin >> numOfReq;
		for (int m = 0; m < numOfReq; ++m)
		{
			cin >> phonenumForReq;
			vecReq.push_back(phonenumForReq);
		}
	}

	bool flag = false;
	for (int i = 0; i < vecReq.size(); i++)
	{
		string str;
		for (int j = 0; j < vecReq[i].size(); ++j)
		{
			str += vecReq[i][j];
			if (rule.find(str) != rule.end())
			{
				cout << rule[str] << endl;
				flag = true;
			}
		}
		if (flag == false)
			cout << "unknow" << endl;
		flag = false;
	}

	system("pause");
	return 0;
}