#include<bits/stdc++.h>
using namespace std;

void customsort(int a[], int n){
    int i = 0, j = n-1;
    while(i<j){
        if(a[i] == 0){
            i++;
        }
        else{
            if(a[j] == 0){
                swap(a[i],a[j]);
                i++;
                j--;
            }
            else{
                j--;
            }
        }
    }
}

int main()
{
    int a[1000];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    customsort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}