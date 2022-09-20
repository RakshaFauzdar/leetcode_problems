class Solution {
public:
    
    void solve(int left,int right,vector<string>&v,string s)
    {
        if(left==0 && right==0)
        {
            v.push_back(s);
            return;
        }
        
        if(left>0)
        {
            solve(left-1,right,v,s+"(");
        }
        if(right>left)
        {
            solve(left,right-1,v,s+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        
        
        vector<string>ans;
        string s="";
        solve(n,n,ans,s);
        return ans;
        
        
    }
};