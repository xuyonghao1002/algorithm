#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <vector>
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;

struct fruit
{
	string name;
	int price;
	friend bool operator < (fruit a, fruit b)
	{
		return a.price < b.price;
	}
};


int main(int argc, char * argv[])
{
    /*int a[5] = {2,2,2,2,2};
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 5; ++i)
    {
    	cout << a[i] << endl;
    }*/

    char str[100];
    int n;
    while(cin >> str) {
        // cout << str <<endl;
        sscanf(str, "%d", &n);
        cout << n << endl;
    }
	
    return 0;
}