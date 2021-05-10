// Explaination - https://www.youtube.com/watch?v=84a8fQp5hJA

#include<bits/stdc++.h>
using namespace std;

int advanced_binarySearch(int nums[],int n,int key){
    if(n == 0){
        return -1;
    }

    int low = 0,high = n-1;
    int first = nums[0];

    while(low <= high){
        int mid = low + (high - low) / 2;
        int value = nums[mid];

        if(value == key){
            return mid;
        }
        bool am_big = value >= first;
        bool key_big = key >= first;

        if(am_big == key_big){
            if(value < key){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        else{
            if(am_big){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    int* a = new int[10000];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;

    cout<<advanced_binarySearch(a,n,key);

    return 0;
}
