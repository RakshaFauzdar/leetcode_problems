class Solution {
public:
    void solve(vector<string>&v,int left,int right,string s)
    {
        if(left==0 && right==0)
        {
            v.push_back(s);
            return;
        }
        if(left>0)
        {
            solve(v,left-1,right,s+"(");
        }
        if(right>left)
        {
            solve(v,left,right-1,s+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string>v;
        solve(v,n,n,s);
        return v;
        
    }
};