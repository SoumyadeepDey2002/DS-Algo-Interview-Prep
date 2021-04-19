#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b[] = {1,2,3};
    cout<<b<<endl;  //Prints address of starting index

    char a[] = {'a','b','c','d','e','\0'};
    cout<<a<<endl;

    //Initialization
    char s1[] = {'h','e','l','l','o'};  //doesn't terminanate with null char so when printed can have garbage char at the end
    char s2[] = "hello";  //another way

    /* When we print a int array we need the length of the array but when we print a 
       char array by just cout it doesn't care about length it stops only if it sees '\0' */
    
    cout<<s1<<" "<<sizeof(s1)<<endl; // 5 bytes as s1 doesn't have '\0'
    cout<<s2<<" "<<sizeof(s2)<<endl; // 6 bytes

    char s3[] = "hello";  //giving size is optional

    char s4[10];
    cin>>s4; // keeps taking until it encounters ' ' or '\n' ,cin also automatically adds '\0' at the end
    cout<<s4;


    return 0;
}