//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     int solve(int n)
     {
         int res=0;
         while(n>0)
         {
             int sol=n%10;
             res+=(sol*sol*sol);
             n=n/10;
             
         }
         return res;
     }
    string armstrongNumber(int n){
        // code here
        int ans=solve(n);
        if(ans==n)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends