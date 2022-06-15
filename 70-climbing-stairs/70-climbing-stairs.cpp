class Solution {
public:
    int climbStairs(int n) {
       if(n==0 || n==1 || n==2)
       {
           return n;
       }
       //  int a=2,b=1;
       //  for(int i=2;i<n;i++)
       //  {
       //      int t=a;
       //      a+=b;
       //      b=t;
       //  }
       //  return a;
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
        
    }
};