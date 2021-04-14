// Question link - https://hack.codingblocks.com/app/practice/2/413/problem

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

    int k;
    cin>>k;

    for(int i=0;i<n-1;i++){
    	for(int j=i+1;j<n;j++){
    		int sum = a[i] + a[j];
    		if(sum == k){
    			cout<< min(a[i],a[j]) <<" and "<< max(a[j],a[i]) <<endl;
    		}
    	}
    }

    return 0;
}