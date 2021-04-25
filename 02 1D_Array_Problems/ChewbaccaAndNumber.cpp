#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cin>>a;

	int length = a.length();

	for(int i=0;i<length;i++){
		if(a[i]-'0' >= 5){
			if(i==0 && a[i]=='9'){
				continue;
			}
			int num = a[i] - '0';
			num = 9-num;
			a[i] = char('0'+num);
		}
	}


	for(int i=0;i<length;i++){

		cout<<a[i];
	}
	

	

	return 0;
}