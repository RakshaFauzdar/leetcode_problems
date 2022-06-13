// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    vector<vector<int>>adj(N);
	    vector<int>v(N,0);
	    int m=prerequisites.size();
	    for(int i=0;i<m;i++)
	    {
	        adj[prerequisites[i].first].push_back(prerequisites[i].second);
	        v[prerequisites[i].second]++;
	    }
	    
	    queue<int>q;
	    for(int i=0;i<N;i++){
	        if(v[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    
	    int ans=0;
	    while(!q.empty())
	    {
	        int c=q.front();
	        q.pop();
	        ans++;
	        for(auto i:adj[c])
	       {
	           v[i]--;
	           if(v[i]==0)
	           {
	               q.push(i);
	           }
	       }
	    }
	    
	    return N==ans;
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends