// cooodiingggg --> coding

#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(char a[]){
    int i=0;
    int j=0;
    while(a[j]!='\0'){
        if(a[i] == a[j]){
            j++;
        }
        else{
            i++;
            a[i] = a[j];
        }
    }
    i++;
    a[i] = '\0';
}

int main()
{
    char a[1000];
    cin>>a;

    removeDuplicates(a);

    cout<<a;

    return 0;
}