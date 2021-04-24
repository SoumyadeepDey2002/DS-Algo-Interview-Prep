#include<bits/stdc++.h>
using namespace std;

void display(int a[][1000], int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int a[1000][1000] = {0};  //All index have 0 in them

	int m,n;
	cin>>m>>n;

	//An uninitialized array/matrix has garbage value 

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}

	display(a,m,n);

	return 0;
}