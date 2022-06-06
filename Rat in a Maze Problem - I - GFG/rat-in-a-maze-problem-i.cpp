// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void dfs(vector<vector<int>>adj,int i,int j,int n,int m,vector<string>&s,string s1)
    {
        if(i<0 || j<0 || i>=n || j>=m || adj[i][j]==0 )return;
        
        if(i==n-1 && j==m-1)
        {
            s.push_back(s1);
            return;
        }
        adj[i][j]=0;
        dfs(adj,i+1,j,n,m,s,s1+'D');
        dfs(adj,i-1,j,n,m,s,s1+'U');
        dfs(adj,i,j+1,n,m,s,s1+'R');
        dfs(adj,i,j-1,n,m,s,s1+'L');
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>s1;
        string s="";
        dfs(m,0,0,n,n,s1,s);
        return s1;
        // Your code goes here
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends