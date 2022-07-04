// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    long long countWays(int N) {
       int dp[N+1];
       long long m=1e9+7;
       dp[0]=dp[1]=dp[2]=1;
       dp[3]=2;
       for(int i=4;i<=N;i++)
       {
           dp[i]=(dp[i-1]%m+dp[i-3]%m+dp[i-4]%m)%m;
       }
       
       
       return dp[N]%m;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countWays(N) << endl;
    }
    return 0;
}  // } Driver Code Ends