class Solution {
public:
    void dfs(int node,vector<int>adj[],vector<bool>&vis,int n,int &c)
    {
        vis[node]=true;
        c++;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                dfs(it,adj,vis,n,c);
            }
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        int m=edges.size();
        vector<int>v[n];
        vector<bool>vis(n,false);
        for(int i=0;i<m;i++)
        {
            v[edges[i][0]].push_back(edges[i][1]);
            v[edges[i][1]].push_back(edges[i][0]);
        }
        long long ans=0;
        vector<long long>v1;
for(int i=0;i<n;++i)
{
  if(!vis[i])
  {
     
     int count=0;
     dfs(i,v,vis,n,count);
     v1.push_back(count);
  }        
}
       
        long long p=v1.size();
        long long sum=0;
        for(int i=0;i<p;i++)
        {
            sum+=v1[i];
        }
        // vector<long long>u;
        // for(int i=0;i<p;i++)
        // {
        //     u.push_back((long long)sum-v1[i]);
        //     sum=sum-v1[i];
        // }
        // long long k=1e9+7;
        for(int i=0;i<p;i++)
        {
             int x=v1[i];
            sum-=x;
            ans+=(v1[i]*sum);
        }
        return ans;
        
        
//    
       
      
    }
};