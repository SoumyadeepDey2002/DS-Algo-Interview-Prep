#include<bits/stdc++.h>
using namespace std;

//Binary Search 
//Efficient way to search in sorted Arrays

int binary_search(int a[], int n, int key){
	int s = 0;
	int e = n-1;

	while(s<=e){
		int mid = (s + e)/2;

		if(a[mid] == key){
			return mid;
		}
		else if(key > a[mid]){
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int n,key;
	cin >> n;

	int a[1000];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	//Ask for the element we want to search
    cin>>key;

	cout<<binary_search(a,n,key);

	return 0;
}