#include <iostream>
using namespace std;

int* fun(){   //returns int* type
    int a[] = {1,2,3,4,5};
    cout<< a <<endl;

    cout<< a[0] <<endl;

    int* ptr = a;
    return ptr;
}

int main() {
    int* b = fun();
    cout<< b <<endl;
    cout<< b[0] <<endl;  // doesn't return 1 as the array a in fun has been deallocated

    return 0;
}


/*
0x7fff85ef2b80
1
0x7fff85ef2b80
1033433747
*/