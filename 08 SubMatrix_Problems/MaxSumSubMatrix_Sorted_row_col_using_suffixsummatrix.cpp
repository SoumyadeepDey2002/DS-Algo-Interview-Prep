#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000][1000];
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    // Preparing suffix sum array

    int suf[1000][1000] = {0};

    for(int j=m-1;j>=0;j--){
        int sum = 0;
        for(int i=n-1;i>=0;i--){
            sum+=a[i][j];
            suf[i][j] = sum;
        }
    }

    for(int i = n-1;i>=0;i--){
        int sum = 0;
        for(int j = m-1;j>=0;j--){
            sum+=suf[i][j];
            suf[i][j] = sum;
        }
    }

    //finding max element in the suffix sum matrix which is sum of elemts from (n-1,m-1) -> (i,j)

    int maximum = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            maximum = max(maximum,suf[i][j]);
        }
    }

    cout<<maximum;

    return 0;
}