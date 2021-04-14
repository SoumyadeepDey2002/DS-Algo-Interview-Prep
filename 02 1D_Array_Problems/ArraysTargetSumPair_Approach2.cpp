// Question link - https://hack.codingblocks.com/app/practice/2/413/problem

//Aproach 2 - 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[1000];

    for(int i=0;i<n;i++){
   	cin>>a[i];
    }

    int k;
    cin>>k;

    sort(a,a+n);

    int i = 0;
    int j = n - 1;

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