#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestPalindrome(string str)
{
	if(str.empty() || str.size()==1)
		return str;
	int left, right, maxlen=0, start=0;
	int len=str.length();
	int i=0;
	while(i < len) {
	    left = i;
	    right = i;
	    while(right < len-1 && str[right]==str[right+1]) {
	        ++right;
	    }
	    i=right+1;
	    while(left >= 0 && right < len && str[left]==str[right]) {
	        --left;
	        ++right;
	    }
	    if(maxlen < right - left -1)
	    {
	    	start = left+1;
	    	maxlen = right-left-1;
	    }
	}
	return str.substr(start, maxlen);
}

int main(int argc, char const *argv[])
{
	string str;
	while(cin >> str) {
	    cout << longestPalindrome(str) << endl;
	}
	
	return 0;
}