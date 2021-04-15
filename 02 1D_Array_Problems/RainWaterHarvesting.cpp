// Question link - https://hack.codingblocks.com/app/practice/2/1363/problem

#include<bits/stdc++.h>
using namespace std;

int a[1000000], l[1000000], r[1000000];

int main()
{
	int n;
	cin>>n;

	if(n==1){
		cout<<0;
	}
	else{

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	l[0] = a[0];
	r[n-1] = a[n-1];

	// Precomputing highest left building
	for(int i=1;i<n;i++){
		l[i] = max(l[i-1],a[i]);
	}

	// Precomputing highest right building
	for(int i=n-2;i>=0;i--){
		r[i] = max(r[i+1],a[i]);
	}

	// water stored = min(highest left,highest right) - height of that building
	long long water_stored = 0;

	for(int i=0;i<n;i++){
		water_stored += (min(l[i],r[i]) - a[i]);
	}

	cout<<water_stored;
	

    }

	return 0;
}
