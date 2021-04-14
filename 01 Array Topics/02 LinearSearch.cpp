#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n, key;
	cin>>n;

	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	//Ask for the element  you want to search
	cout<<"Enter the element you want to search : ";
	cin>>key;

	//Linear Search Algorithm

	int i;
	for(i=0;i<n;i++){
		if(a[i] == key){
			cout<<key<<" found at "<<i<<" index";
			break;
		}
	}
	if(i==n){
		cout<<key<< "is not present in the array";
	}

	return 0;
}