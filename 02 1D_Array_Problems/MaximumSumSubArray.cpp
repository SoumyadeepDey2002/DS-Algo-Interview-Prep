// Question link - https://hack.codingblocks.com/app/practice/2/704/problem

#include<bits/stdc++.h>
using namespace std;

void KadanesAlgo(int a[], int n){

    int maxsum = 0;
    int currentsum = 0;

    for(int i=0;i<n;i++){
        currentsum += a[i];
        if(currentsum < 0){
            currentsum = 0;
        }
        maxsum = max(currentsum, maxsum);
    }
    cout<<maxsum;
}

int main() {
	int t;
	cin>>t;

	int a[100000];

	while(t--){
		int n;
		cin>>n;

		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		KadanesAlgo(a,n);
		cout<<endl;

	}

	return 0;
}