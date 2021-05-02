#include<bits/stdc++.h>
using namespace std;

int firstoccurence(int arr[],int n,int key){
    //First Occurance 
    int firstocc = -1;

    int l=0,r=n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] == key){
            firstocc = mid;
            r = mid - 1;
        }
        else if(key > arr[mid]){
            l = mid + 1;
        }
        else if(key < arr[mid]){
            r = mid - 1;
        }
    }

    return firstocc;
}

int lastoccurence(int arr[],int n,int key){
    //Last Occurance 
    int lastocc = -1;

    int l=0,r=n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] == key){
            lastocc = mid;
            l = mid + 1;
        }
        else if(key > arr[mid]){
            l = mid + 1;
        }
        else if(key < arr[mid]){
            r = mid - 1;
        }
    }

    return lastocc;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 5, 8, 8, 8, 8, 8, 10, 12, 15, 20};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    //First and last occurance in a sorted array
    

    cout<<firstoccurence(arr,n,key)<<endl;
    cout<<lastoccurence(arr,n,key)<<endl;

    return 0;
}

/*
Input - 8
Output - 
6
10
*/