class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>v;
        vector<int>vis(n);
        for(auto it:edges)
        {
            vis[it[1]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                v.push_back(i);
            }
        }
        
        
        return v;
        
    }
};