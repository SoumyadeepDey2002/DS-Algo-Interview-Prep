#include<bits/stdc++.h>
using namespace std;

//clear bit (make it 0)
void clearBit(int &n,int i){
    int mask = ~(1<<i);
    n = n & mask;
}

int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;

    clearBit(n,i);

    cout<<n;

    return 0;
}