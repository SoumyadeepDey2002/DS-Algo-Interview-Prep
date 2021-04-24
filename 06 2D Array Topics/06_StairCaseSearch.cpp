#include<bits/stdc++.h>
using namespace std;

void staircase_search(int a[][1000], int n, int x){
    // return 1 if found ,if not found return  0

    int i = 0;
    int j = n-1;

    while(a[i][j]!=x && i<=n-1 && j<=n-1 && i>=0 && j>=0 ){
        if(x > a[i][j]){
            i++;
        }
        else if(x < a[i][j]){
            j--;
        }
    }

    cout<< (a[i][j] == x);
}

int main()
{
    int n;
	int m;
    cin>>n;
	cin>>m;

    int a[1000][1000];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int x;
    cin>>x;

    staircase_search(a,m,x);

    return 0;
}