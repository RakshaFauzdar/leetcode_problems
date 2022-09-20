class Solution {
public:
    
    void solve(string s,string s1,vector<string>&v)
    {
        vector<string>ans={""," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        if(s.size()==0)
        {
            v.push_back(s1);
            return;
        }
        
        string p=ans[s[0]-'0'];
        s.erase(s.begin()+0);
        for(int i=0;i<p.size();i++)
        {
            solve(s,s1+p[i],v);
        }
        
        
        
    }
    vector<string> letterCombinations(string digits) {
        
        int n=digits.size();
         if(digits=="")
            return {};
        
        vector<string>v;
        string s1="";
        solve(digits,s1,v);
        return v;
        
        
    }
};