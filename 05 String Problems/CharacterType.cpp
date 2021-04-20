#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c;
	cin>>c;

	if(isupper(c)){
		cout<<'U'<<endl;
	}
	else if(islower(c)){
		cout<<'L'<<endl;
	}
	else{
		cout<<'I';
	}

	return 0;
}