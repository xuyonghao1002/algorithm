//#include <iostream>
//using namespace std;
//
//bool duplicate(int numbers[], int length, int* &duplication) {
//	for (int i = 0; i < length; i++)
//	{
//		for (int j = i + 1; j < length; j++)
//		{
//			if (numbers[j] == numbers[i])
//			{
//				duplication = numbers + i;
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	int nums[] = { 2,3,1,0,2,5,3 };
//	int* p = new int;
//	bool res = duplicate(nums, 7, p);
//
//	cout << res << ',' << *p << endl;
//	system("pause");
//	return 0;
//}