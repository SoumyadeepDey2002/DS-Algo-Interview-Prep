#include<bits/stdc++.h>
using namespace std;

bool mycompare(string a, string b){

	string ab = a + b;
	string ba = b + a;

	return ab.compare(ba) > 0;

}

int main()
{
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		string a[100];

		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		sort(a,a+n,mycompare);

		for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<endl;
	}


	return 0;
}