#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000][1000];

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    int pre[1000][1000] = {0};

    //Precomputing sum from (0,0) diagonally

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum+=a[i][j];
            pre[i][j] += sum;
        }
    }

    for(int j=0;j<n;j++){
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=pre[i][j];
            pre[i][j] = sum;
        }
    }

    //printing sum of sub matices

    for(int li=0;li<n;li++){
        for(int lj=0;lj<n;lj++){  //extracting all possible top left
            
            for(int bi=li;bi<n;bi++){
                for(int bj=lj;bj<n;bj++){  //extracting all possible bottom right
                    
                    int sum = pre[bi][bj] - pre[li-1][bj] - pre[bi][lj-1] + pre[li-1][lj-1];
                    cout<<sum<<endl;
                }
            }
        }
    }

    

    return 0;
}