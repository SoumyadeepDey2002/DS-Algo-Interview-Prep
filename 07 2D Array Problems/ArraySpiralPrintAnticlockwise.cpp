#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000][1000]={0};
    int m,n;
    cin>>m>>n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    int lr = 0, mr = m-1, lc = 0, mc = n-1;
    int count = 0;
    while(count<(m*n)){

        for(int i=lr;i<=mr;i++){
            cout<<a[i][lc]<<", ";
            count++;
        }
        lc++;

        for(int i=lc;i<=mc;i++){
            cout<<a[mr][i]<<", ";
            count++;
        }
        mr--;

        for(int i=mr;i>=lr;i--){
            cout<<a[i][mc]<<", ";
            count++;
        }
        mc--;


        for(int i=mc;i>=lc;i--){
            cout<<a[lr][i]<<", ";
            count++;
        }
        lr++;

        
    }
    cout<<"END";

    return 0;
}