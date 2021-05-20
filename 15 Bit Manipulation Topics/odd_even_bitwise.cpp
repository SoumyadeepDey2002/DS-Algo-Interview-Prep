#include<bits/stdc++.h>
using namespace std;

bool oddoreven(int n){
    return (n&1);        // 1 if odd, 0 if even
}

int main()
{
    int n;
    cin>>n;

    if(oddoreven(n)){
        cout<<n<<" is odd";
    }
    else{
        cout<<n<<" is even";
    }

    return 0;
}