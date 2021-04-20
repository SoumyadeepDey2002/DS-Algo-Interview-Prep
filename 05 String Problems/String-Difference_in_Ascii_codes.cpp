#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);

	string ans = "";

	for(int i=0;i<s.length()-1;i++){
		ans += s[i]+to_string((int)s[i+1] - (int)s[i]);
	}

	ans += s[s.length()-1];

	cout<<ans;

	return 0;
}

/*

Sample Input
acb
Sample Output
a2c-1b

*/