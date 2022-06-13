class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
       
        vector<vector<int>>v(n,vector<int>(n,INT_MAX));
        for(int i=0;i<n;i++)
        {
            v[i][i]=0;
        }
        
        for(vector<int>v1:edges)
        {
            v[v1[0]][v1[1]]=v1[2];
            v[v1[1]][v1[0]]=v1[2];
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if( v[j][i]!=INT_MAX && v[k][i]!=INT_MAX && v[j][i]+ v[k][i]<=v[j][k])
                    {
                        v[k][j]=v[j][i]+v[k][i];
                    }
                }
            }
        }
        
        int ans;
        int count=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int d=0;
            for(int j=0;j<n;j++)
            {
                if(i!=j && v[i][j]<=distanceThreshold)
                {
                    d++;
                }
            }
            if(d<=count)
            {
                ans=i;
                count=d;
            }
        }
        return ans;
        
    }
};