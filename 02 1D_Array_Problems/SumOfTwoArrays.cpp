#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n1,n2;
	int a[1000],b[1000];

	cin>>n1;
	for(int i=0;i<n1;i++){
		cin>>a[i];
	}

	cin>>n2;
	for(int i=0;i<n2;i++){
		cin>>b[i];
	}

	int n3 = max(n1,n2) + 1;

	int c[n3];

	int i=n1-1, j=n2-1, k=n3-1;
	int carry = 0;

	while(i>=0 && j>=0){
		int sum = a[i] + b[j] + carry;
		c[k] = sum%10;
		carry = sum/10;
		i--;
		j--;
		k--;
	}

	while(i>=0){
		int sum = a[i]+carry;
		c[k] = sum%10;
		carry = sum/10;
		i--;
		k--;
	}

	while(j>=0){
		int sum = b[j]+carry;
		c[k] = sum%10;
		carry = sum/10;
		j--;
		k--;
	}

	int start=0;
	if(carry!=0){
		c[k] = carry;
	}
	else{
		start=1;
	}

	for(int z=start;z<n3;z++){
		cout<<c[z]<<", ";
	}
	cout<<"END";

	

	return 0;
}