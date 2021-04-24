#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N,M,K,S;
	cin>>N>>M>>K>>S;

	char a[1000][1000] = {' '};

	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>a[i][j];
		}
	}

	int i, j;
	bool flag = false;

	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			if(a[i][j] == '.'){
				S-=2;
			}
			else if(a[i][j] == '*'){
				S+=5;
			}
			else if(a[i][j] == '#'){
				break;
			}
			if(j != M-1){
				S--;
			}
			if(S<K){
				flag = true;
				break;
			}
		}
		if(flag == true){
			break;
		}
	}

	if((i > N-1 || j > M-1) && flag == false){
		cout<<"Yes"<<endl<<S;
	}
	else{
		cout<<"No";
	}
	
	return 0;
}