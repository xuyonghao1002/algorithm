#include <iostream>
#include <vector>
using namespace std;

int Fibonacci(int n) {
	if (n == 1)
	{
		return 1;
	}

	if (n == 2)
	{
		return 2;
	}

	return (Fibonacci(n - 1) + Fibonacci(n - 2));
}



int main()
{
	int res = Fibonacci(10);
	cout << res << endl;
	system("pause");
	return 0;
}