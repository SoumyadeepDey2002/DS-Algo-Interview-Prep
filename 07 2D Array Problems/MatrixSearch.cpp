#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;

	int a[100][100];
    
	//taking input of the matrix
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}

	int key;
	cin>>key;

	int i=0,j=n-1;

	while(a[i][j]!=key && i>=0 && j>=0 && i<m && i<n){
		if(a[i][j] > key){
			j--;
		}
		else if(a[i][j] < key){
			i++;
		}
	}

	if(a[i][j] == key){
		cout<<1;
	}
	else{
		cout<<0;
	}


	return 0;
}