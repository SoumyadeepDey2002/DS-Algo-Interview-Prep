// Solution video link - https://www.youtube.com/watch?v=ftwTYNrbGeo&list=LL&index=1

#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
	return a.second < b.second;
}

int main()
{
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		pair<int,int> arr[n];

		//Initalizing Array
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			arr[i] = make_pair(a,b);
		}

		// sorting according to ending time
		sort(arr,arr+n,compare);

		int chosen = 0;
		int count = 1;

		for(int i=1;i<n;i++){
			if(arr[i].first >= arr[chosen].second){
				count++;
				chosen = i;
			}
		}
		cout<<count<<endl;
	}


	return 0;
}