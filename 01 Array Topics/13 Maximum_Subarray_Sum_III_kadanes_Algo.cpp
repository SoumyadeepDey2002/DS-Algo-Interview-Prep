#include<bits/stdc++.h>
using namespace std;

void KadanesAlgo(int a[], int n){

    int maxsum = 0;
    int currentsum = 0;

    for(int i=0;i<n;i++){
        currentsum += a[i];
        if(currentsum < 0){
            currentsum = 0;
        }
        maxsum = max(currentsum, maxsum);
        cout<<currentsum<<"  "<<maxsum<<endl;
    }
    cout<<maxsum;
}

int main()
{
    int n;
    cin>>n;
    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    KadanesAlgo(a,n);

    return 0;
}

/*
Sample Input - 
9
-4 1 3 -2 6 2 -8 -9 4

Sample Output
0  0
1  1
4  4
2  4
8  8
10  10
2  10
0  10
4  10
10
*/