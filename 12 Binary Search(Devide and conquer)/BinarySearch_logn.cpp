#include<bits/stdc++.h>
using namespace std;

int mybinarysearch(int* arr,int n,int key){
    int l = 0,r = n-1,mid = 0;

    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            l = mid+1;
        }
        else if(key < arr[mid]){
            r = mid-1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin>>n;
    int* arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int index = mybinarysearch(arr,n,key);

    cout<<index;

    return 0;
}