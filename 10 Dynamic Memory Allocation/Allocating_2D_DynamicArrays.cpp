#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    //Array of row heads
    int** a = new int*[n];

    //create 2D array
    for(int i=0;i<n;i++){
        a[i] = new int[m]{0};
    } 

    //Take input and print elements
    // a[i][j] means *(*(a+i) + j)
    int value = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j] = value;
            value++;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
1 2 3 
4 5 6 
7 8 9 
*/