class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.length();
        int d=1<<k;
        unordered_set<string>s1;
        for(int i=0;i+k<=n;i++)
        {
            s1.insert(s.substr(i,k));
        }
        return s1.size()==d;
        
    }
};