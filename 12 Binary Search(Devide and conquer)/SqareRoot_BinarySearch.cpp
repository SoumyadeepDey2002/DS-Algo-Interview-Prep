#include<bits/stdc++.h>
using namespace std;

int sqareroot_BS(int n){
    // the range of monotonic search space in this case will be [0,n]

    int low = 0, high = n, mid, ans = -1;

    while(low<=high){
        mid = low + (high - low)/2;
        int value = mid*mid;
        if(value == n){
            return mid;
        }
        else if(value > n){
            high = mid - 1;
        }
        else{
            low = mid + 1;
            ans = mid;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<sqareroot_BS(n);

    return 0;
}