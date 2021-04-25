#include<bits/stdc++.h>
using namespace std;

void display(int a[][1000], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int a[1000][1000];
	int n;
	cin>>n;

	//taking input array elements
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}

	//Reversing the array elemnts in each row 
	for(int i=0;i<n;i++){
		int l=0,r=n-1;
		while(l<r){
			swap(a[i][l],a[i][r]);
			l++;
			r--;
		}
	}

	//transposing the matrix
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			swap(a[i][j],a[j][i]);
		}
	}

	display(a,n);

	return 0;
}
