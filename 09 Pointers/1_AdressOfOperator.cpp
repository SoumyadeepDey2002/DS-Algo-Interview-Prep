#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    cout<< &x <<endl;

    float y = 5.34;
    cout<< &y <<endl;

    //It doesnt work for character variables
    // as the << is overloaded that when it sees a char * it prints the actual char

    char ch = 'A';
    cout<< &ch;

    //However the << is only over loaded for char so if we change the data type explicitly it will work

    //Explicit type casting from ch* to void* ,will work for int as well
    cout<<(void *)&ch;


    return 0;
}

/*
OUTPUT :
0x7ffd50c0aaf0
0x7ffd50c0aaf4
A
0x7ffd50c0aaef
*/