// Question link - https://hack.codingblocks.com/app/practice/2/195/problem

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	sort(a,a+n);

	int k;
	cin>>k;

	for(int i=0;i<=n-3;i++){

		int fixed = a[i];
		int target = k - fixed;

		int l = i+1;
		int r = n-1;

		while(l<r){
			if(target > (a[l] + a[r])){
				l++;
			}
			else if(target < (a[l] + a[r])){
				r--;
			}
			else if(target == (a[l] + a[r])){
				cout<<fixed<<", "<<a[l]<<" and "<<a[r]<<endl;
				l++;
				r--;
			}
			}
		}

	

	return 0;
}