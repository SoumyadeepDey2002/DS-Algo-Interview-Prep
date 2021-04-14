// Question link - https://hack.codingblocks.com/app/practice/2/1077/problem

#include<bits/stdc++.h>
using namespace std;

int kadanesAlgo(int arr[], int n){
	int maxsum = 0;
        int currentsum = 0;

        for(int i=0;i<n;i++){
           currentsum += arr[i];
            if(currentsum < 0){
            currentsum = 0;
            }
        maxsum = max(currentsum, maxsum);
    }
    return maxsum;
}

int main()
{
	int t;
	cin>>t;

	while(t--){

		int n;
	cin>>n;

	int a[10000];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

    int maxcircularsum = INT_MIN;

		int b[10000];
		for(int i=0;i<n;i++){
			int index = i;
			for(int j=0;j<n;j++){
				if(index>n-1){
					index = index-(n-1)-1;
				}
				b[j] = a[index];
				index++;
			}
			maxcircularsum = max(kadanesAlgo(b,n),maxcircularsum);
		}

		cout<<maxcircularsum<<endl;
	}

	return 0;
}