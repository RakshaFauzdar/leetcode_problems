// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
  void dfs(int i,vector<bool>&vis,unordered_map<int,vector<int>>&adj)
  {
      vis[i]=true;
      for(auto it:adj[i])
      {
          if(!vis[it])
          {
              dfs(it,vis,adj);
          }
      }
  }
    int numProvinces(vector<vector<int>> adj, int V) {
        int n=adj.size();
        int m=adj[0].size();
        unordered_map<int,vector<int>>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(adj[i][j]==1)
                {
                    v[i].push_back(j);
                    v[j].push_back(i);
                }
            }
        }
        vector<bool>vis(V,false);
        int c=0;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                c++;
                dfs(i,vis,v);
                
            }
        }
        return c;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}  // } Driver Code Ends