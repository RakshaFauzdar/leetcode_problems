class Solution {
public:
    bool is(string &a,string &b)
    {
        
        int n=a.length();
        int m=b.length();
        int c=0;
        int i=0,j=0;
        
        if(m+1!=n)
        {
            return false;
        }
        while(i<n)
        {
            if(a[i]==b[j])
            {
                i++;
                j++;
            }
            else
            {
                
                i++;
            }
        }
        return j==m;
        
    }
    static bool cmp(string&a,string&b)
    {
        return a.size()<b.size();
    }
    int longestStrChain(vector<string>& words) {
        int n=words.size();
        sort(words.begin(),words.end(),cmp);
        vector<int>dp(n,1);
        int mx=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(is(words[i],words[j]))
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            mx=max(dp[i],mx);
        }
        
        return mx;
        
        
        
    }
};