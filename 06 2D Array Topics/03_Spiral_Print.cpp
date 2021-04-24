#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    int a[1000][1000] = {0};

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    int cnt = 0;
    int tne = m*n;

    int minr = 0, maxr = m-1, minc = 0, maxc = n-1;

    while(cnt < tne){
         for(int i = minr; i <= maxr && cnt < tne; i++){
            cout<<a[i][minc]<<endl;
            cnt++;
         }
         minc++;

         for(int j = minc; j <= maxc && cnt < tne; j++){
            cout<<a[maxr][j]<<endl;
            cnt++;
         }
         maxr--;

         for(int i = maxr; i >= minr && cnt < tne; i--){
            cout<<a[i][maxc]<<endl;
            cnt++;
         }
         maxc--;

         for(int j = maxc; j >= minc && cnt < tne; j--){
            cout<<a[minr][j]<<endl;
            cnt++;
         }
         minr++;

      }

    return 0;
}