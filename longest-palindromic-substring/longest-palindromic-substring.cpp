class Solution {
public:
    string longestPalindrome(string s) {
        
        int n=s.length();
        int dp[n][n];
        memset(dp,false,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            dp[i][i]=true;
        }
        int mx=1,s1=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=true;
                s1=i;
                mx=2;
            }
        }
        
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<n-i+1;j++)
            {
                int k=j+i-1;
                if(s[j]==s[k] && dp[j+1][k-1]==true)
                {
                    dp[j][k]=true;
                    if(i>mx)
                    {
                        s1=j;
                        mx=i;
                    }
                }
            }
        }
        int d=s1+mx-1;
       string ans="";
        for(int i=s1;i<=d;i++)
        {
            ans+=s[i];
        }
        return ans;
        
    }
};