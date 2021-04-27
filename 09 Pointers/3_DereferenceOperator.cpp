#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    int* xptr;
    xptr = &x;

    cout<< &x <<endl;
    cout<< xptr <<endl;

    cout<< *(&x) <<endl;
    cout<< *(xptr) <<endl;

    cout<< *(&xptr) <<endl;
    cout<< &(*xptr) <<endl;

    cout<< &xptr <<endl;
    int** xxptr = &xptr;
    cout<< xxptr <<endl;


    return 0;
}

/*
OUTPUT :

0x7ffec99c3ba4
0x7ffec99c3ba4
10
10
0x7ffec99c3ba4
0x7ffec99c3ba4
0x7ffec99c3ba8
0x7ffec99c3ba8
*/