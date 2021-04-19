#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char largest[1000];
    char a[1000];

    int len = 0;
    int largest_len = 0;

    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        len = strlen(a);
        if(len>largest_len){
            strcpy(largest,a);
            largest_len = len;
        }
    }

    cout<<largest<<" "<<largest_len;
    
    return 0;
}

/*

input:

3
i m
good
awe

output:

good 4

*/