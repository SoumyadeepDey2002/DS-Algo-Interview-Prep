#include<bits/stdc++.h>
using namespace std;

int main()
{
    //String Init
    string s0;
    string s1("hello");

    string s2 = "hello world!";
    string s3(s2);

    string s4 = s3;

    char a[] = {'a','b','c','\0'};
    string s5(a);

    cout<<s0<<endl;  // empty string 
    cout<<s1<<endl;  // hello
    cout<<s2<<endl;  // hello world!
    cout<<s3<<endl;  // hello world!
    cout<<s4<<endl;  // hello world!
    cout<<s5<<endl;  // abc

    // To check empty string

    if(s0.empty()){
        cout<<"s0 is an empty string"<<endl;
    }

    //Append
    s0.append("I love c++ ");
    cout<<s0<<endl;
    s0 += "and python..";
    cout<<s0<<endl;

    //Remove
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;

    //Compare two strings
    s0 = "Apple";
    s1 = "Mango";
    cout<< s1.compare(s2) <<endl; //returns a integer==0 if equal, > 0 or < 0 if not, 

    //Overloaded Operators
    // we can use > , < to compare strings lexically

    cout<<s1[0]<<endl;

    //Find Substrings
    string s = "I want to have apple juice";
    int idx = s.find("apple");
    cout<<idx<<endl;

    //Remove a word from the string
    string word = "apple";
    int len = word.length();
    cout<<s<<endl;
    s.erase(idx,len);
    cout<<s<<endl;

    //Iterate over all characters of string 
    for(int i=0;i<s1.length();i++){
        cout<<s1[i]<<":";
    }
    cout<<endl;

    //Iterators
    // .begin() and .end() give the address of the first and last index of the word, end() here contains \0
    for(auto i=s1.begin();i!=s1.end();i++){
        cout<<(*i)<<","; //* is dereferencing to the char
    }
    cout<<endl;

    //for each loop
    for(auto c:s1){
        cout<<c<<".";
    }



    return 0;
}


//OUTPUT
/*

hello
hello world!
hello world!
hello world!
abc
s0 is an empty string
I love c++ 
I love c++ and python..
23
0
-27
M
15
I want to have apple juice
I want to have  juice
M:a:n:g:o:
M,a,n,g,o,
M.a.n.g.o.
*/