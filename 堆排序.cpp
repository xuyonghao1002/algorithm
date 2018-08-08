#include <iostream>
//#include <stdio.h>
//#include <cmath>
//#include <algorithm>
using namespace std;

//调整成堆的函数
void Heapify(int nums[], int first, int end)
{
	int father = first;
	int son = 2 * father + 1;
	while (son < end)
	{
		//判断右子节点
		if (son + 1 < end && nums[son] < nums[son + 1])
			++son;
		if (nums[father] > nums[son])
			break;
		else
		{
			swap(nums[father], nums[son]);
			father = son;
			son = 2 * father + 1;
		}
	}
}

void HeapSort(int nums[], int len)
{
	int i = 0;
	for (i = len / 2 - 1; i >= 0; --i)
	{
		Heapify(nums, i, len);
	}
	for (i = len - 1; i > 0; --i)
	{
		swap(nums[i], nums[0]);
		Heapify(nums, 0, i);
	}
}

int main()
{
	int nums[] = { 5,4,3,2,1 };
	int len = sizeof(nums) / sizeof(int);
	HeapSort(nums, len);


	return 0;
}