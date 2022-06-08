class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    q.push({i,j});
                }
            }
        }
        
        int ans=0;
        
        while(q.empty()==false)
        {
            auto curr=q.front();
            int x1=curr.first;
            int y1=curr.second;
            q.pop();
            pair<int,int>dir[4]={{0,1},{0,-1},{1,0},{-1,0}};
            for(auto it:dir)
            {
                int x=it.first+x1;
                int y=it.second+y1;
                if(x>=0 && x<n && y>=0 && y<n && grid[x][y]==0)
                {
                    q.push({x,y});
                    grid[x][y]=grid[x1][y1]+1;
                    ans=max(ans,grid[x][y]);
                }
            }
        }
        
        if(ans>0)
        {
            return ans-1;
        }
        else
        {
            return -1;
        }
        
    }
};