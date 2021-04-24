#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[10][10];
    a[0][0] = 'A';

    char b[][10] = {{'a','b','\0'},{'d','e','f','\0'}};
    char c[][10] = {"ab","def","ghi","hello"};

    cout<<a[0][0]<<endl<<endl;
    cout<<b[0]<<endl<<b[1]<<endl<<endl;
    cout<<c[1]<<endl<<c[3]<<endl;

    return 0;
}