#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2,5,11,87,99,99,99,100,304,355};
    int n = sizeof(arr)/sizeof(int);

    //Search in a sorted array
    int key;
    cin>>key;

    bool present  = binary_search(arr,arr+n,key);

    if(present){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent!"<<endl;
    }
    
    //Get index of the element

    auto lb = lower_bound(arr,arr+n,99);
    cout<<"Lower Bound of 99 is "<<(lb-arr)<<endl;

    auto ub = upper_bound(arr,arr+n,99);
    cout<<"Upper Bound of 99 is "<<(ub-arr)-1<<endl;

    return 0;
}

/*
Input - 304

Output - 
Present
Lower Bound of 99 is 4
Upper Bound of 99 is 6

*/