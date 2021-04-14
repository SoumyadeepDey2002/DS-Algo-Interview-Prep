//Arrange a randomly shuffled array in increasing/decreasing order
// Algorithm :
// stay at 0 index ,find the least number swap 0 index with that
// stay at 1 index ,find least number except 0 index, and swap it with 1 index
// so on

#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n){
	for(int i=0;i<n-1;i++){
		//find out the smallest index in the unsorted part
		int min_index = i;
		for(int j=i;j<n;j++){
			if(a[j]<a[min_index]){
				min_index = j;
			}
		}
		//After this loop we can do swap finally
		swap(a[i], a[min_index]);
	}
}

int main()
{
	int a[1000];
	int n;

	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	selection_sort(a,n);

	//After sorting 

	for(int i=0;i<n;i++){
		cout<< a[i] <<" ";
	}


	return 0;
}