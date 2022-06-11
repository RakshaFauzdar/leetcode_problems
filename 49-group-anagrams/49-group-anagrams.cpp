class Solution {
public:
    bool is(string a,string b)
    {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        return a==b;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>v;
        unordered_map<string,vector<string>>m;
        string s;
        for(auto it:strs)
        {
            s=it;
            sort(s.begin(),s.end());
            m[s].push_back(it);
            
        }
        for(auto it:m)
        {
            v.push_back(it.second);
        }
        
        return v;
        
        
    }
};