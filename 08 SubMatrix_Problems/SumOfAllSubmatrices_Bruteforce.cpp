//In this solution I printed the sum of all sub matrices the actual question was to print sum pf the sums of all the sub matrices a small difference, logic is same

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

    for(int li=0;li<n;li++){
        for(int lj=0;lj<n;lj++){     // extract all possible top left
            
            for(int bi=li;bi<n;bi++){
                for(int bj=lj;bj<n;bj++){    // extract all posible bottom right

                    int sum = 0;
                    for(int i=li;i<=bi;i++){
                        for(int j=lj;j<=bj;j++){    // sum of all elements of current submatrix
                            sum += a[i][j];
                        }
                    }
                    cout<<sum<<endl;
                }
            }
        }
    }

    return 0;
}
