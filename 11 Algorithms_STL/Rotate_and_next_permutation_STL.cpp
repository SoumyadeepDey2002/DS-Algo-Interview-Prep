#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    rotate(arr,arr+2,arr+n);

    display(arr,n);
    cout<<endl;

    //Apply the same on vector
    vector<int> v{1,2,3};

    // rotate(v.begin(),v.begin()+3,v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    next_permutation(v.begin(),v.end());
    // Makes next lexiographically bigger combination

    //for each loop
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    next_permutation(v.begin(),v.end());
    // Makes next lexiographically bigger combination

    //for each loop
    for(int x:v){
        cout<<x<<" ";
    }


    return 0;
}

/*

30 40 50 10 20 
1 2 3 
1 3 2 
2 1 3 

*/