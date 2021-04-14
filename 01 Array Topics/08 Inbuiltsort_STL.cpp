#include<bits/stdc++.h>
using namespace std;

//Define a Comparator function
bool compare(int a, int b){
	cout<<"Comparing "<<a<<" and "<<b<<endl;
	return a > b;  // controls increasing or decreasing sorting
}

int main()
{
	int a[1000];
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	// Sort an array using sort function
	sort(a, a+n, compare);   // (start,end,compare func) --> in a container like array


	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}

	return 0;
}

/*
Sample Input - 
8 
1 6 9 4 8 13 7 5

Sample Output - 
Comparing 6 and 1
Comparing 9 and 6
Comparing 4 and 9
Comparing 4 and 1
Comparing 4 and 6
Comparing 8 and 9
Comparing 8 and 1
Comparing 8 and 4
Comparing 8 and 6
Comparing 8 and 9
Comparing 13 and 9
Comparing 7 and 13
Comparing 7 and 1
Comparing 7 and 4
Comparing 7 and 6
Comparing 7 and 8
Comparing 5 and 13
Comparing 5 and 1
Comparing 5 and 4
Comparing 5 and 6
13,9,8,7,6,5,4,1,

*/