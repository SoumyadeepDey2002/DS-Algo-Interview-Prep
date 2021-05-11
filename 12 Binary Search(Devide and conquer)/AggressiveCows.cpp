#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool IsThisOk(ll d,ll locations[],ll n,ll cows){
    ll count_cows = 1;
    //1 cow is always in the first stall
    ll prev_cow_loc = locations[0];

    for(ll i=1;i<n;i++){
        if(locations[i] - prev_cow_loc >= d){
            prev_cow_loc = locations[i];
            count_cows++;
        }
        if(count_cows == cows){
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        ll n,cows;
        cin>>n>>cows;

        ll* locations = new ll[n];

        for(ll i=0;i<n;i++){
            cin>>locations[i];
        }

        sort(locations,locations+n);

        //Monotonic Search space = [0,a[n-1]-a[0]]
        ll start = 0;
        ll end = locations[n-1]-locations[0];

        ll ans = -1;

        while(start <= end){
            ll mid = start + (end - start)/2;
            if(IsThisOk(mid,locations,n,cows)){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}