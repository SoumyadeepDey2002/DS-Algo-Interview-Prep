#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	long long i,j,k,value = 0,ans = 0;

	cin>>k;
	cin.get();
	getline(cin,s);
    
	long long n = s.length();
	for(i=0;i<n;i++){
		char ch = s[i];
		int count[] = {0,0};
		j = i+1;
		count[ch - 'a']++;

		while(j < n){

			if(min(count[0],count[1]) <= k){
				count[s[j] - 'a']++;
				j++;
			}
			else{
				break;
			}
		}

		if(j!=n)
			value = j-i-1;
		else
		    value = j-i;

		ans = max(ans,value);
	}

	cout<<ans;

	return 0;
}