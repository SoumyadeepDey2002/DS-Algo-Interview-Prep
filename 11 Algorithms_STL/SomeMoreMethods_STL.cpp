#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    swap(a,b);
    cout<<a<<" and "<<b<<endl;

    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    int arr[] = {1,2,3,4,5,6,7,8};
    reverse(arr,arr+4);

    for(int x:arr){
        cout<<x<<" ";
    }


    return 0;
}

/*

20 and 10
20
10
4 3 2 1 5 6 7 8 

*/