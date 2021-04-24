#include<bits/stdc++.h>
using namespace std;

void display(int arr[][1000], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void rotate(int arr[][1000], int n){

    //Reverse each row
    for(int row=0;row<n;row++){
        int start_col = 0;
        int end_col = n-1;
        while(start_col < end_col){
            swap(arr[row][start_col],arr[row][end_col]);
            start_col++;
            end_col--;
        }
    }

    //Transposing
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j > i){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
}

void rotate_STL(int arr[][1000], int n){

    //Reverse each row
    for(int i=0;i<n;i++){
        reverse(arr[i],arr[i]+n);
    }

    //Transposing
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j > i){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;

    int a[1000][1000];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    //rotate(a,n);
    rotate_STL(a,n);
    display(a,n);

    return 0;
}