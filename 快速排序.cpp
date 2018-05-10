#include <iostream>
using namespace std;

void QuickSort(int *a, int first, int end)
{
	if (first < end)
	{
		int i = first, j = end, x = a[first];
		while (i < j)
		{
			while (i < j && a[j] >= x)
			{
				j--;
			}
			if (i < j)
				a[i++] = a[j];
			while (i < j && a[i] < x)
				i++;
			if (i < j)
				a[j--] = a[i];
		}
		a[i] = x;
		QuickSort(a, first, i - 1);
		QuickSort(a, i + 1, end);
	}
}

int main()
{
	int a[] = { 4,2,6,1,8,9,44,66,3 };
	int res = sizeof(a) / sizeof(int);
	QuickSort(a, 0, res - 1);

	system("pause");
	return 0;
}