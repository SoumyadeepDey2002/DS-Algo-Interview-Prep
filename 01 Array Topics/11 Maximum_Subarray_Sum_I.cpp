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

	//Finding the Maximum subarray sum

	int maxsum = INT_MIN;
	int left,right;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			//Now finding the sum from i to j
			int current_sum = 0;
			for(int k=i;k<=j;k++){
				current_sum += a[k];
			}
			if(current_sum > maxsum){
				maxsum = current_sum;
				left = i;
				right = j;
			}
		}
	}

	cout<<"Maximum Sum is "<<maxsum<<" from "<<left<<" to "<<right<<endl;

	return 0;
}
