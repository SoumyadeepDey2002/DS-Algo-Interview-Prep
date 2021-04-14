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
	//Algorithm to find the largest and smallest number
    int max = INT_MIN;

    for(int i=0;i<n;i++){
    	if(a[i] > max){
    		max = a[i];
    	}
    }

    int min = INT_MAX;

    for(int i=0;i<n;i++){
    	if(a[i] < min){
    		min = a[i];
    	}
    }

    cout<<"Largest Number : "<<max<<endl;
    cout<<"Smallest Number : "<<min<<endl;

	return 0;
}