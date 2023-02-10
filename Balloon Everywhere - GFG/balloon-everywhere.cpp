//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        int n=s.size();
        unordered_map<char,int>mp,mp1;
        string s1="balloon";
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(auto it:s1)
        {
            mp1[it]++;
        }
        
        
        int cnt=INT_MAX;
        for(int i=0;i<s1.size();i++)
        {
            cnt=min(cnt,mp[s1[i]]/mp1[s1[i]]);
        }
        return cnt;
        
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends