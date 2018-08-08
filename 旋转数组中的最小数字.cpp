//#include <iostream>
//#include <vector>
//using namespace std;
//
//int minNumberInRotateArray(vector<int> rotateArray) {
//	if (rotateArray.size() == 0)
//	{
//		return 0;
//	}
//	int min_num = rotateArray[0];
//	for (int i = 1; i < rotateArray.size(); i++)
//	{
//		if (rotateArray[i] < rotateArray[i-1])
//		{
//			min_num = rotateArray[i];
//			break;
//		}
//	}
//	return min_num;
//}