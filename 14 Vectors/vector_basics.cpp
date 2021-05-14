#include<bits/stdc++.h>
using namespace std;

// Vectors --> Dynamic Arrays --> grow or shrink it's size
// the size gets doubled when it is full

int main()
{
    // You can create and initialise a vector
    vector<int> a;
    vector<int> b(5,10); //five int with value 10, init a vector of zeros (n,0)
    vector<int> c(b.begin(),b.end());

    vector<int> d{1,2,3,10,14};

    //Look at how can we iterate over the vector
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<",";
    }
    cout<<endl;

    for(auto it = d.begin();it!=d.end();it++){
        cout<<(*it)<<",";
    }
    cout<<endl;

    //For each loop
    for(int x:d){
        cout<<x<<",";
    }
    cout<<endl;

    //Discuss more functions
    vector<int> v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);  //inserts element at the end of the vector
                         //it also expand the size of the vector
    }

    //when the array in the vector obj is full ,it creates a new array
    //with double the size and copies the prevous elements, inserts a element
    //at the end ,and deletes the old array, hence it's an expensive operation

    for(int x:v){
        cout<<x<<" ";
    } 
    cout<<endl;

    //Understanding at memory level, what are the differences in the two
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl; //size of underlying array
    cout<<v.max_size()<<endl; //maximum no of elements a vector can hold in worst condition

    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl; //size of underlying array
    cout<<d.max_size()<<endl; //maximum no of elements a vector can hold in worst condition
    


    return 0;
}

/*

1,2,3,10,14,
1,2,3,10,14,
10 20 30 40 50 
5 --> filled
8 --> v had 4 size initially but due to v.push_bac() adding the 5th element the size doubled ,it consumed a lot of time
2305843009213693951 --> max size it can get to
5
5 --> as d was initialized with 5 elemets it didn't need to double
2305843009213693951

*/