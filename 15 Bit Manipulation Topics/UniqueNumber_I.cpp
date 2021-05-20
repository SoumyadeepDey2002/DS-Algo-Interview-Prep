#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int unq = 0;
    while(n--){
        int a;
        cin>>a;

        unq = unq ^ a;
    }

    cout<<unq;

    return 0;
}