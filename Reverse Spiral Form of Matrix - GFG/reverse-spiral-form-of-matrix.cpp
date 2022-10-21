//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        // code here
        
        
        vector<int>v;
        
        int tr=0;
        int br=R-1;
        int tc=0;
        int bc=C-1;
        int d=1;
        while(tr<=br && tc<=bc)
        {
            if(d==1)
            {
                for(int i=tc;i<=bc;i++)
                {
                    v.push_back(a[tr][i]);
                }
                d=2;
                tr++;
            }
            else if(d==2)
            {
                for(int i=tr;i<=br;i++)
                {
                    v.push_back(a[i][bc]);
                }
                d=3;
                bc--;
            }
            else if(d==3)
            {
                for(int i=bc;i>=tc;i--)
                {
                    v.push_back(a[br][i]);
                }
                d=4;
                br--;
            }
            else
            {
                for(int i=br;i>=tr;i--)
                {
                    v.push_back(a[i][tc]);
                }
                d=1;
                tc++;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends