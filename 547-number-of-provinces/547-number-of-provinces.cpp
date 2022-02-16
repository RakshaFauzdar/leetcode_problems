class Solution {
public:
    
    void dfs(vector<bool>&v,int s,vector<vector<int>>&c)
    {
        v[s]=true;
        for(int i=0;i<c[s].size();i++)
        {
            if(i==s)
            {
                continue;
            }
            if(c[s][i] && !v[i])
            {
                dfs(v,i,c);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool>v(n,0);
        
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(!v[i])
            {
                dfs(v,i,isConnected);
                count++;
            }
        }
        return count;
        
    }
};