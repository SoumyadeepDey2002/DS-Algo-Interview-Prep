#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[1000];
    int csum[1000] = {0};
    int maxsum = INT_MIN;

    int left,right;

    cin>>a[0];
    csum[0] = a[0];

    for(int i=1;i<n;i++){
        cin>>a[i];
        csum[i] = csum[i-1] + a[i];
    }

    //Maxsum Calculation

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currentsum = csum[j] - csum[i-1];
            if(currentsum > maxsum){
                maxsum = currentsum;
                left = i;
                right = j;
            }
        }
    }

    cout<<"Maximum Sum is "<<maxsum<<endl;
    for(int i=left;i<=right;i++){
        cout<<a[i]<<" ";
    }
   
    return 0;
}