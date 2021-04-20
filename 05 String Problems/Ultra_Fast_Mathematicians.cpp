#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	cin.get();

	while(t>0){

		string a,b,c="";
		cin>>a>>b;

		for(int i=0;i<a.length();i++){
			if(a[i] == b[i]){
				c+='0';
			}
			else{
				c+='1';
			}
		}
		cout<<c<<endl;

		t--;
	}

	return 0;
}