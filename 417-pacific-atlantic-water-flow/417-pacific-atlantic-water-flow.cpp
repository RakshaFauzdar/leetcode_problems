class Solution {
public:
    int x[5]={0,0,-1,1};
    int y[5]={1,-1,0,0};
    bool isSafe(int i,int j,int n,int m)
    {
        if(i<0 || j<0 || i>=n || j>=m)
            return false;
        
        return true;
    }
    
    void bfs(vector<vector<int>>mat,int n,int m,vector<vector<bool>>&vis,queue<pair<int,int>>q)
    {
        while(q.empty()==false)
        {
            pair<int,int>curr=q.front();
            q.pop();
            
            vis[curr.first][curr.second]=true;
            for(int i=0;i<4;i++)
            {
                int nx=curr.first+x[i];
                int ny=curr.second+y[i];
                
                if(isSafe(nx,ny,n,m) && mat[nx][ny]>=mat[curr.first][curr.second] && vis[nx][ny]==false)
                {
                    q.push({nx,ny});
                    vis[nx][ny]=true;
                }
            }
            
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        queue<pair<int,int>>q1;
        queue<pair<int,int>>q2;
        vector<vector<bool>>v1(n,vector<bool>(m,false));
            vector<vector<bool>>v2(n,vector<bool>(m,false));
        
        for (int i = 0; i < m; i++) {
        q1.push({ 0, i });
        q2.push({ n - 1, i });
    }
    for (int j = 0; j < n - 1; j++) {
        q1.push({ j + 1, 0 });
        q2.push({ j, m - 1 });
    }
        
        bfs(heights,n,m,v1,q1);
        bfs(heights,n,m,v2,q2);
        
        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v1[i][j] && v2[i][j])
                {
                    v.push_back({i,j});
                }
            }
        }
        return v;
        
        
        
    }
};