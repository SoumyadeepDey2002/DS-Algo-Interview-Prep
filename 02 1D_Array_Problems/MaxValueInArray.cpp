//Take as input N, the size of array. Take N more inputs and store that in an array. Write a function which returns the maximum value in the array. Print the value returned.

#include<bits/stdc++.h>
using namespace std;

int maximum(int a[], int n){
	int ans = INT_MIN;

	for(int i=0;i<n;i++){
		if(a[i] > ans){
			ans = a[i];
		}
	}

	return ans;
}

int main()
{
	int n;
	cin>>n;

	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<maximum(a,n);

	return 0;
}