#include <iostream>
using namespace std;
int main() {
    char str[1000];
    int freq[256] = {0};
    cin>>str;

    for(int x=0;str[x]!='\0';x++){
        freq[(int)str[x]]++;
    }
    int ans=0;
    char ch;
    for(int x=0;x<256;x++){
        if(freq[x]>0){
            if(freq[x]>ans){
                ans=freq[x];
                ch=char(x);
            }
        }
    }
    cout<<ch;
}