#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Allocation + Deallocation(when goes out of scope) = Compiler
    int b[100] = {0};
    cout<<sizeof(b)<<endl;
    cout<<b<<endl; //Symbol Table
    // here b cannot be overwritten, b is a part of read only memory

    //Dynamic Memory Allocation(on the fly)

    int n;
    cin>>n;
    int* a = new int[n]{0};
    cout<<sizeof(a)<<endl;
    cout<<a<<endl; //Variable a that is in static memory -> can be Overwritten
    // a = new char[30];

    // here a[i] = *(a+i)
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }

    //Free up the space
    delete [] a;




    return 0;
}

/*
OUTPUT - 

400
0x7ffe75fb6a60
8
0x55f400058c40
1 2 3 4 5 
*/