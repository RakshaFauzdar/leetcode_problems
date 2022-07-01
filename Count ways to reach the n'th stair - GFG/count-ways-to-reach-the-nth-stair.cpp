// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
       int dp[n+1];
       dp[0]=0;
       dp[1]=1;
       dp[2]=2;
       int m=1e9+7;
       for(int i=3;i<=n;i++)
       {
           dp[i]=dp[i-1]%m+dp[i-2]%m;
       }
       return dp[n]%m;
    }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends