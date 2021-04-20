#include<bits/stdc++.h>
using namespace std;

string compress(string s){

	string ans="";
	char c = s[0];
	int count = 0;
	
	for(int i=0;i<s.length();){
	    if(s[i] == c){
	        count++;
            i++;
	    }
	    else{
	        ans = ans + c + to_string(count);
	        c = s[i];
	        count = 0;
	    }
	}

    ans = ans + c + to_string(count);
	
	return ans;
}

int main()
{
	string s;
	cin>>s;

	s = compress(s);

	cout<<s;
	
	return 0;
}