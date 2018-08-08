//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <stack>
//#include <queue>
//#include <map>
//using namespace std;
//
//struct node
//{
//	double num;
//	char op;
//	bool flag;
//};
//
//string str;
//stack<node> s;
//queue<node> q;
//map<char, int> m;
//
//void change()
//{
//	//double num;
//	node temp;
//	for (int i = 0; i < str.length(); i++)
//	{
//		//如果是数字
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			temp.flag = true;
//			temp.num = str[i++] - '0';
//			while (i < str.length() && str[i] >= '0' && str[i] <= '9')
//			{
//				temp.num = temp.num * 10 + (str[i] - '0');
//				i++;
//			}
//			q.push(temp);
//		}
//		else
//		{
//			temp.flag = false;
//			while (!s.empty() && m[str[i]] <= m[s.top().op])
//			{
//				q.push(s.top());
//				s.pop();
//			}
//			temp.op = str[i];
//			s.push(temp);
//			i++;
//		}
//	}
//
//	while (!s.empty())
//	{
//		q.push(s.top());
//		s.pop();
//	}
//}
//
//double cal()
//{
//	double temp1, temp2;
//	node cur, temp;
//	while (!q.empty())
//	{
//		cur = q.front();
//		q.pop();
//		if (cur.flag = true) s.push(cur);
//		else
//		{
//			temp2 = s.top().num;
//			s.pop();
//			temp1 = s.top().num;
//			s.pop();
//			temp.flag = true;
//			switch (cur.op)
//			{
//			case '+':
//				temp.num = temp1 + temp2;
//				break;
//			case '-':
//				temp.num = temp1 - temp2;
//				break;
//			case '*':
//				temp.num = temp1 * temp2;
//				break;
//			case '/':
//				temp.num = temp1 / temp2;
//				break;
//			}
//			s.push(temp);
//		}
//	}
//	return s.top().num;
//}
//
//int main()
//{
//	m['+'] = m['-'] = 1;
//	m['*'] = m['/'] = 2;
//	while (getline(cin, str), str != "0")
//	{
//		/*for (string::iterator it = str.end(); it != str.begin(); it--)
//		{
//			if (*it == ' ')
//				str.erase(it);
//		}*/
//		while (1)
//		{
//			int pos = str.find(" ");
//			if (pos == string::npos)
//				break;
//			str.erase(pos, 1);
//		}
//		while (!s.empty()) s.pop();
//		change();
//		printf("%.2f\n", cal());
//	}
//	//cout << str << endl;
//	system("pause");
//	return 0;
//}