#include<bits/stdc++.h>
using namespace std;

int x[] = {2,3,5,7,11,13,17,19,23,29};
bool visited[1000] = {false};
int t = 0;

bool isvalid(int i, int j){
    for(int a=i;a<=j;a++){
        if(visited[a]){
            return false;
        }
    }
    return true;
}

int CBcheck(int n){
    if(n==0 || n==1){
        return false;
    }
    for(int i=0;i<10;i++){
        if(n == x[i]){
            return true;
        }
    }
    for(int i=0;i<10;i++){
        if(n%x[i]==0){
            return false;
        }
    }
    return true;
}

void substrings(string s){
    
         for(int a=1;a<=s.length();a++)
         {
            int i=0;
            while(i+a-1<s.length()){
            string temp = s.substr(i,a);
            if(isvalid(i,i+a-1)){
                if(CBcheck(stoi(temp))){
                    t++;
                    for(int z=i;z<=i+a-1;z++){
                        visited[z] = true;
                    }
                }
            }
            i++;
            }
         }    

}

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    substrings(s);

    cout<<t;

    return 0;
}