// Declaration - 
// Datatype name [size]
// By default all indexes have garbage value
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Declaration and Initialization

	int a[10] = {0}; //initializes first index as 0 and rest default to 0
	int b[10] = {5}; //initializes first index as 5 and rest default to 0
	int c[10] = {1,2,3};  //1,2,3,0,0,0,0,...

	//Update

	a[2] = 5;
	cout<<a[2]<<endl;

	//Iteration

	for(int i=0;i<10;i++){
		cout<<c[i]<<",";
	}
	cout<<endl;
	
	//Size of array
	int length = sizeof(c)/sizeof(int);
	cout<<"length of array c is "<<length<<endl;

	//Input from user
	int d[10];

	for(int i=0;i<5;i++){
		cin>>d[i];
	}
	for(int i=0;i<10;i++){
		cout<<d[i]<<",";
	}

	return 0;
}


/*
OUTPUT - 
5
1,2,3,0,0,0,0,0,0,0,
length of array c is 10
1,3,4,2,6,11673088,11673100,6422204,1998415089,8,these are garbage 
values
*/