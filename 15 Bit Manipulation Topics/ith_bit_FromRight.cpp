#include<bits/stdc++.h>
using namespace std;

int ithbit(int n,int i){
    int mask = (1<<i);
    int bit = (n&mask)>0 ? 1:0;

    return bit;
}

int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;

    cout<<ithbit(n,i);

    return 0;
}