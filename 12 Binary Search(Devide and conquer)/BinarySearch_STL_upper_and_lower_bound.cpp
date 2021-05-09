#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,20,25,34,50,50,50,65,70,75,86,91,100,200};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;   //91

    bool present = binary_search(arr,arr+n,key);    
    if(present){
        cout<<"present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }

    //two more things
    //get the index of element 
    // lower_bound(s,e,key) and upper_bound(s,e,key)

    //lower_bound(s,e,key) returns the address of first bucket that is greater than or equal to key
    auto lb = lower_bound(arr,arr+n,50);
    cout<<lb-arr<<endl;

    //first_bound(arr,arr+n,50)creturns address of first bucket that is strictly greater than key
    int* ub = upper_bound(arr,arr+n,50);
    cout<<ub-arr<<endl;

    cout<<"frequency : "<<ub-lb<<endl;



    return 0;
}

/*

Output

present
4
7
frequency : 3

*/