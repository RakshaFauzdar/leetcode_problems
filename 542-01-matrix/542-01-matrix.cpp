class Solution {
public:
    bool is(int i,int j,int n,int m)
    {
        if(i<0 || j<0 || i>=n || j>=m)
            return false;
        
        return true;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>v(n,vector<int>(m,-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i,j});
                    v[i][j]=0;
                }
            }
        }
        
        while(q.empty()==false)
        {
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            if(is(i,j-1,n,m) && v[i][j-1]==-1)
            {
                q.push({i,j-1});
                v[i][j-1]=v[i][j]+1;
            }
            if(is(i,j+1,n,m) && v[i][j+1]==-1)
            {
                q.push({i,j+1});
                v[i][j+1]=v[i][j]+1;
            }
            if(is(i+1,j,n,m) && v[i+1][j]==-1)
            {
                q.push({i+1,j});
                v[i+1][j]=v[i][j]+1;
            }
            
            if(is(i-1,j,n,m) && v[i-1][j]==-1)
            {
                q.push({i-1,j});
                v[i-1][j]=v[i][j]+1;
            }
                
        }
        
        return v;
        
    }
};