class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
       vector<int>dp(n+1,1);
        if(n==0 || s[0]=='0')
        {
            return 0;
        }
        for(int i=2;i<=n;i++)
        {
            if(s[i-1]=='0')
            {
                dp[i]=0;
            }
            else
            {
                dp[i]=dp[i-1];
            }
            
            if(s[i-2]=='1' || s[i-2]=='2' && s[i-1]<='6')
            {
                dp[i]+=dp[i-2];
            }
        }
        return dp[n];
        
        
    }
};