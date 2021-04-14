#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,3,5,7,10,11,12,13};
    int length = sizeof(a)/sizeof(int);
    int k = 16;

    int i = 0;
    int j = length - 1;

    while(i<j){
        int sum = a[i] + a[j];
        if(sum < k){
            i++;
        }
        else if(sum > k){
            j--;
        }
        else if(sum == k){
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
    }

    return 0;
}