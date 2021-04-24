#include<bits/stdc++.h>
using namespace std;

void waveprint(int a[][1000], int m, int n){
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<a[i][j]<<", ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<a[i][j]<<", ";
            }
        }
    }
    cout<<"END";
}

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

    waveprint(a,m,n);

	//display(a,m,n);

	return 0;
}