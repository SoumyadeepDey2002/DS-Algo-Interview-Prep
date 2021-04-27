#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10, b=20;

    int* ptr = &a;

    cout<< &a <<endl;
    cout<< ptr <<endl;

    ptr = &b;

    cout<< ptr <<endl;

    return 0;
}

/*
0x7ffcf22ba938
0x7ffcf22ba938
0x7ffcf22ba93c
*/