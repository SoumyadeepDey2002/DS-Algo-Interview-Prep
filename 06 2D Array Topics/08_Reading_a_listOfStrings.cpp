#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[1000][1000];

    //Read a list of string and we will store them in a 2D array
    int n;
    cin>>n;

    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a[i], 1000);
        //default delimeter is \n, or it stops taking input when encounters \n
    }

    //Print out all the Strings 
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}