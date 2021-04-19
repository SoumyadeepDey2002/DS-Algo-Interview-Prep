#include<bits/stdc++.h>
using namespace std;

void readline(char a[], int maxlen, char delim='\n'){
    int i=0;
    char ch = cin.get();
    while(ch != delim){
        a[i] = ch;
        if(i == (maxlen-1)){
            break;
        }
        i++;
        ch = cin.get();
    }
    //once out of the loop
    a[i] = '\0';
}

int main()
{
    char a[1000];
    //readline(a,6);
    cin.getline(a,1000,'*');
    //STL version of readline
    //if want to take 5 characters give max len as 6
    //\n is the default delim ,it stops taking input when sees it
    cout<<a;

    return 0;
}