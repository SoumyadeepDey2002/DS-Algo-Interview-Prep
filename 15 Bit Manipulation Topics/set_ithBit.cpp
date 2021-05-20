#include<bits/stdc++.h>
using namespace std;

//set ith bit (make it 1)
int set_bit(int n,int i){
    int mask = (1<<i);
    return n|mask;
}

int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;

    cout<<set_bit(n,i);

    return 0;
}