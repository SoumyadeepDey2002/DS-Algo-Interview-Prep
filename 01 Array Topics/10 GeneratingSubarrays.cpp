#include<bits/stdc++.h>
using namespace std;

void generate_subarrays(int a[], int n){

    //Generating all subarrays
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){

			//Elements of subarray(i,j)
			for(int k=i;k<=j;k++){
				cout<<a[k]<<",";
			}
			cout<<"\n";
		}
	}
}

int main()
{
	int n;
	cin>>n;

	int a[1000];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	generate_subarrays(a,n);

	return 0;
}

/*
Sample Input - 
3
1 2 3

Sample Output - 
1,
1,2,
1,2,3,
2,
2,3,
3,

*/