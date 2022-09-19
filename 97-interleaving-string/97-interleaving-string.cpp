class Solution {
public:
int dp[2001][2001];
    bool solve(string a,string b,string c,int n,int m,int z)
    {
        if(z==0)return 1;
        if(dp[n][m]!=-1)return dp[n][m];
        
        
        int a1,b1;
        a1=0,b1=0;
        
        if(n-1>=0  && a[n-1]==c[z-1])
        {
            a1=solve(a,b,c,n-1,m,z-1);
        }
        if(m-1>=0 && b[m-1]==c[z-1])
        {
            b1=solve(a,b,c,n,m-1,z-1);
        }
        
        
        return dp[n][m]= a1 || b1;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int n=s1.size();
        int m=s2.size();
        int z=s3.size();
        if(n+m!=z)
        {
            return false;
        }
        
        
        memset(dp,-1,sizeof(dp));
        return solve(s1,s2,s3,n,m,z);
    }
};