#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> d{1,2,3,10,14};
    //push Back O(1) most of the time
    d.push_back(16);

    //Pop Back / Removes the last element O(1)
    d.pop_back();

    //Insert some element in the middle O(N)
    d.insert(d.begin()+3,4,100);

    //erase some elements in the middle
    d.erase(d.begin()+2);
    d.erase(d.begin()+2,d.begin()+5);

    //size
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    //we avoid shrink
    d.resize(18); //if only the size is incresing the underlying capacity will increase, otherwise only the size will change
    cout<<d.capacity()<<endl;

    //remove all the vector --> size = 0 ,removes the elements
    d.clear();

    //empty
    if(d.empty()){
        cout<<"This is an empty vector";
    }

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    //Reserve 
    int n;
    cin>>n;
    vector<int> v;
    //capacity of vector starts from 1 and doubles like 1,2,4,8,16,..
    //so to avoid doubling, we will use reserve function

    v.reserve(1000);

    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
    }
    cout<<v.capacity()<<endl;

    return 0;
}