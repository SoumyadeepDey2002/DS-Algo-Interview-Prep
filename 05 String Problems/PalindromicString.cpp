#include<bits/stdc++.h>
using namespace std;

bool is_Palindrome(char a[]){
	int s = 0;
	int l = strlen(a)-1;

	while(s<l){
		if(a[s] == a[l]){
			s++;
			l--;
		}
		else{
			return false;
		}
	}

	return true;
}

int main()
{
	int N;
	cin>>N;
	char a[1000];

	for(int i=0;i<N;i++){
		cin>>a[i];
	}

	is_Palindrome(a) ? cout<<"true" : cout<<"false";

	return 0;
}