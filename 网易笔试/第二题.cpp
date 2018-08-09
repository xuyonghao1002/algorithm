//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//bool contain(string s, string x);
//bool judgeFive(string str);
//bool judgeFour(string str);
//bool judgeThree(string str);
//bool judgeTwo(string str);
//
//char specialChar[] = { '!','@','#','$','%','^','&','*','(',')','_','-','=','+','[',']','{','}',',','.','<','>','/','?' };
//int specialSize = sizeof(specialChar) / sizeof(char);
//vector<string> comStr = { "password","admin","qwerty","hello","iloveyou","112233" };
//int comStrSize = comStr.size();
//
//bool judge(string str)
//{
//	if (str.length() < 8)
//		return false;
//	if (judgeTwo(str) == false)
//		return false;
//	if (judgeThree(str) == false)
//		return false;
//	if (judgeFour(str) == false)
//		return false;
//	if (judgeFive(str) == false)
//		return false;
//	return true;
//}
//
//bool judgeTwo(string str)
//{
//	bool flag[4] = { false };
//	int len = str.length();
//	for (int i = 0; i < len; ++i)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			flag[0] = true;
//			continue;
//		}
//		if (str[i] >= 'a' && str[i] <= 'z')
//		{
//			flag[1] = true;
//			continue;
//		}
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			flag[2] = true;
//			continue;
//		}
//		for (int j = 0; j < specialSize; ++j)
//		{
//			if (str[i] == specialChar[j])
//			{
//				flag[3] = true;
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < 4; ++i)
//	{
//		if (flag[i] == false)
//			return false;
//	}
//	return true;
//}
//
//bool judgeThree(string str)
//{
//	int len = str.length();
//	for (int i = 0; i < len - 2; ++i)
//	{
//		if (str[i] >= '0' && str[i] <= '9' && str[i + 1] >= '0' && str[i + 1] <= '9' &&str[i + 2] >= '0' && str[i + 2] <= '9')
//		{
//			int t1 = str[i] - '0', t2 = str[i + 1] - '0', t3 = str[i + 2] - '0';
//			if ((t1 - t2) == (t2 - t3))
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//bool judgeFour(string str)
//{
//	int len = str.length();
//	for (int i = 0; i < len - 2; ++i)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z' && str[i + 1] >= 'A' && str[i + 1] <= 'Z' &&str[i + 2] >= 'A' && str[i + 2] <= 'Z')
//		{
//			if ((str[i + 2] - str[i + 1]) == 1 && (str[i + 1] - str[i]) == 1)
//			{
//				return false;
//			}
//		}
//		if (str[i] >= 'a' && str[i] <= 'z' && str[i + 1] >= 'a' && str[i + 1] <= 'z' &&str[i + 2] >= 'a' && str[i + 2] <= 'z')
//		{
//			if ((str[i + 2] - str[i + 1]) == 1 && (str[i + 1] - str[i]) == 1)
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//bool judgeFive(string str)
//{
//	for (int i = 0; i < comStrSize; ++i)
//	{
//		if (contain(str, comStr[i]))
//			return false;
//	}
//	return true;
//}
//
//bool contain(string s, string x)
//{
//	int size = x.size();
//	int sizeS = s.size();
//	if (size > sizeS)
//		return false;
//	for (int i = 0; i < sizeS - size + 1; ++i)
//	{
//		if (s.substr(i, size) == x)
//			return true;
//	}
//	return false;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<string> strs;
//	
//	string temp;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> temp;
//		strs.push_back(temp);
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		if (judge(strs[i]) == false)
//			cout << "no" << endl;
//		else
//			cout << "yes" << endl;
//
//	}
//
//	/*string str = "aaabbbcccA1#";
//	bool res = judgeTwo(str);*/
//
//	system("pause");
//	return 0;
//}