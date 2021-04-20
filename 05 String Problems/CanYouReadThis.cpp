#include <bits/stdc++.h>
using namespace std;

string simplify(string S){
	string ans ="";
    ans += S[0];

	for(int i=1;i<S.length();i++){
		if(S[i] >= 65 && S[i] <= 90){
			ans = ans + "\n" + S[i];
		}
        else{
            ans += S[i];
        }
	}

	return ans;
}

int main()
{
	string S;
	cin>>S;

	S = simplify(S);

    cout<<S;

	return 0;
}