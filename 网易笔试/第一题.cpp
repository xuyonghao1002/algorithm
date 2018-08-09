#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//int cal(int num)
//{
//	int result;
//	if (num <= 5000)
//		result = 0;
//	else if (num <= 8000)
//	{
//		result = (int)((num - 5000)*0.03 + 0.5);
//	}
//	else if (num <= 17000)
//	{
//		result = (int)(3000 * 0.03 + (num - 5000 - 3000)*0.1 + 0.5);
//	}
//	else if (num <= 30000)
//	{
//		result = (int)(3000 * 0.03 + 9000 * 0.1 + (num - 5000 - 12000)*0.2 + 0.5);
//	}
//
//	else if (num <= 40000)
//	{
//		result = (int)(3000 * 0.03 + 9000 * 0.1 + 13000 * 0.2 + (num - 5000 - 25000)*0.25 + 0.5);
//	}
//	else if (num <= 60000)
//	{
//		result = (int)(3000 * 0.03 + 9000 * 0.1 + 13000 * 0.2 + 10000 * 0.25 + (num - 5000 - 35000)*0.3 + 0.5);
//	}
//	else if (num <= 85000)
//	{
//		result = (int)(3000 * 0.03 + 9000 * 0.1 + 13000 * 0.2 + 10000 * 0.25 + 20000 * 0.3 + (num - 5000 - 55000)*0.35 + 0.5);
//	}
//	else
//	{
//		result = (int)(3000 * 0.03 + 9000 * 0.1 + 13000 * 0.2 + 10000 * 0.25 + 25000 * 0.3 + 25000 * 0.35 + (num - 5000 - 80000)*0.45 + 0.5);
//	}
//	return result;
//}

int cal(int num)
{
	int result;
	if (num <= 5000)
		result = 0;
	else if (num <= 8000)
	{
		result = round((num - 5000)*0.03);
	}
	else if (num <= 17000)
	{
		result = round(3000 * 0.03 + (num - 5000 - 3000)*0.1);
	}
	else if (num <= 30000)
	{
		result = round(3000 * 0.03 + 9000 * 0.1 + (num - 5000 - 12000)*0.2);
	}

	else if (num <= 40000)
	{
		result = round(3000 * 0.03 + 9000 * 0.1 + 13000 * 0.2 + (num - 5000 - 25000)*0.25);
	}
	else if (num <= 60000)
	{
		result = round(3000 * 0.03 + 9000 * 0.1 + 13000 * 0.2 + 10000 * 0.25 + (num - 5000 - 35000)*0.3);
	}
	else if (num <= 85000)
	{
		result = round(3000 * 0.03 + 9000 * 0.1 + 13000 * 0.2 + 10000 * 0.25 + 20000 * 0.3 + (num - 5000 - 55000)*0.35);
	}
	else
	{
		result = round(3000 * 0.03 + 9000 * 0.1 + 13000 * 0.2 + 10000 * 0.25 + 25000 * 0.3 + 25000 * 0.35 + (num - 5000 - 80000)*0.45);
	}
	return result;
}

int main()
{
	int n;
	cin >> n;

	vector<int> nums(n, 0);
	for (int i = 0; i < n; ++i)
	{
		cin >> nums[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cout << cal(nums[i]) << endl;
	}


	system("pause");
	return 0;
}