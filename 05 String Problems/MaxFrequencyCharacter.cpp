#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	char a[100];
	int b[100] = {0};

    int count = 0;
	for(int i=0;i<s.length();i++){
		if(s[i]!='\0'){
			a[count] = s[i];
			for(int j=0;j<s.length();j++){
				if(s[i] == s[j]){
					b[count]++;
				}
			}
			for(int j=0;j<s.length();j++){
				if(a[count] == s[j]){
				    s[j] = '\0';
				}
			}
			count++;
		}
	}

    int largest = INT_MIN;
    int index;
    
    for(int i=0;i<count;i++){
        if(b[i] > largest){
            largest = b[i];
            index = i;
        }
    }
    
    cout<<a[index];

	return 0;
}