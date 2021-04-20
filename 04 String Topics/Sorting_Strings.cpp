#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b){         // the default is b>a 
    if(a.length() == b.length()){
        return a>b;
    }
    return a.length() > b.length();
}

int main()
{
    int n;  // no of strings
    cin>>n;
    cin.get();

    string s[100];

    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }

    sort(s,s+n,compare);

    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }

    return 0;
}