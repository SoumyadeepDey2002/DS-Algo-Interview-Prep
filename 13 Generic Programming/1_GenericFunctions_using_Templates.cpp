#include<bits/stdc++.h>
using namespace std;

//Generic function
//using Templates

template<typename T>
int search(T arr[],int n,T key){ 

    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return n;
}

int main()
{
    int a[] = {1,2,3,6,9,8,7,10};
    int n = sizeof(a)/sizeof(int);
    int key = 6;

    cout<<search(a,n,key)<<endl;

    float b[] = {1.1,1.2,1.3};
    float k = 1.2;
    cout<<search(b,3,k)<<endl;

    return 0;
}