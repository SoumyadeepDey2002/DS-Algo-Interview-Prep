//Search --> find
// Takes in 3 parameters, find(start,end,key)
//start - address to start searching from.
//end - search ends before this address ,arr+n ,what ever n is doesn't have to be length of arr
//this function returns the address where it found the key, if it did not found key it will return the address arr+n

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,10,11,9,100};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    auto ptr = find(arr,arr+n,key);
    int index = ptr - arr;          // lets say base address is 100 and key was found in 102 ,102-100 = 2 ,2nd index

    if(index == n){
        cout<<key<<" is not present"<<endl;
    }
    else{
        cout<<index;
    }

    return 0;
}
