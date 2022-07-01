// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
       long long int a=0,b=1,c;
       if(n==1)
       return 1;
       long long mod=1e9+7;
       for(int i=2;i<=n;i++)
       {
           c=(a+b)%mod;
           a=b;
           b=c;
       }
       return b;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends