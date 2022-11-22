class Solution {
public:
    
    int dp[2001][2001];
    int solve(int n,int m,int z,string s,string s1,string c)
    {
        
        if(z==0)
        {
            return 1;
        }
        
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        
        int a=0,b=0;
        if( n-1>=0 && s[n-1]==c[z-1])
        {
            a= solve(n-1,m,z-1,s,s1,c);
        }
        if(m-1>=0 && s1[m-1]==c[z-1])
        {
            b= solve(n,m-1,z-1,s,s1,c);
        }
        
        return dp[n][m]=a||b;
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
        
        return solve(n,m,z,s1,s2,s3);
        
    }
};