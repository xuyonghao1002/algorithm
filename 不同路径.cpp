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

class Solution
{
public:
	int uniquePaths(int m, int n) 
	{
		int dp[100][100]={0};
		dp[1][1] = 1;
		for(int i = 1; i <= m; ++i)
		{
			for(int j = 1; j <= n; ++j)
			{
				if(i > 1 || j > 1)
				{
					dp[i][j] = dp[i-1][j] + dp[i][j-1];
				}
			}
		}
		return dp[m][n];
	}

};

int main(int argc, char * argv[]) 
{
    Solution s;
    int res = s.uniquePaths(7,3);
    cout << res << endl;
	
    return 0;
}