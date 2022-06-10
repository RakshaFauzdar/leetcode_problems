class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        vector<int>dp(256,-1);
        int c=0;
        int mx=-1;
        for(int i=0;i!=n;i++)
        {
            if(dp[s[i]]>mx)
            {
                mx=dp[s[i]];
            }
            dp[s[i]]=i;
            c=max(c,i-mx);
        }
        
        return c;
        
    }
};