#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a[1000][1000];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    // O(n2) Algo

    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int tl = (i+1)*(j+1);
            int br = (n-i)*(m-j);
            sum+=(a[i][j] * (tl * br));
        }
    }

    cout<<sum;

    return 0;
}