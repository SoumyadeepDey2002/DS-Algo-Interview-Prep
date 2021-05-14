/*

You are given with (x,y) coordinates of several cabs 
you are standing at the origin
print the coordinates of cabs in sorted order of distances from you
if two cars have same distance sort according to x coordinate
*/

#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> c1,pair<int,int> c2){
    double d1 = (c1.first*c1.first)+(c1.second*c1.second);
    double d2 = (c2.first*c2.first)+(c2.second*c2.second);
    
    if(d1==d2){
        return c1.first < c2.first;
    }
    return d1 < d2;
}

int main()
{
    vector<pair<int,int>> v;
    v.reserve(1000);
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    sort(v.begin(),v.end()),compare;

    for(auto p:v){
        cout<<"car "<<p.first<<","<<p.second<<endl;
    }

    return 0;
}

/*

INPUT - 
4
1 2
2 2
1 0
0 1

OUTPUT -
car 0,1
car 1,0
car 1,2
car 2,2

*/