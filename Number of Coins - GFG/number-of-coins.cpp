// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	   int dp[V+1];
	   dp[0]=0;
	   int mx=1e9+7;
	   for(int i=1;i<=V;i++)
	   {
	       dp[i]=mx;
	   }
	   for(int i=1;i<=V;i++)
	   {
	       int ans=mx;
	       for(int j=0;j<M;j++)
	       {
	           if(coins[j]<=i)
	           {
	               ans=min(dp[i-coins[j]],ans);
	           }
	       }
	       if(ans==mx)
	       {
	           dp[i]=mx;
	       }
	       else
	       {
	           dp[i]=ans+1;
	       }
	   }
	   if(dp[V]==mx)
	   {
	       return -1;
	   }
	   else
	   {
	       return dp[V];
	   }
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends