// Question link - https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int zero = 0, one = 0, two = 0;
        for(int i=0;i<n;i++){
            if(a[i] == 0){
                zero++;
            }
            else if(a[i] == 1){
                one++;
            }
            else{
                two++;
            }
        }
        
        int index = 0;
        while(zero--){
            a[index] = 0;
            index++;
        }
        while(one--){
            a[index] = 1;
            index++;
        }
        while(two--){
            a[index] = 2;
            index++;
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends