#include <iostream>
using namespace std;

int* fun(){   //returns int* type
    int* a = new int[5];
    a[0] = 11;
    a[1] = 2;

    cout<< a <<endl;

    cout<< a[0] <<endl;

    return a;
}

int main() {
    int* b = fun();
    cout<< b <<endl;
    cout<< b[0] <<endl;  //Even if 'a' gets destroyed after fun ends before it ends it has already pass the address to the heap memory where the array is present
    
    // let us clear the array
    delete [] b;

    return 0;
}


/*
0x55fcf9478c40
11
0x55fcf9478c40
11
*/