class Solution {
public:
    int minDeletions(string s) {
        int n=s.length();
        unordered_map<char,int>m;
        int f[26];
        for(int i=0;i<n;i++)
        {
            m[s[i]-'a']++;
        }
        int c=0;
        unordered_set<int>s1;
        for(int i=0;i<26;i++)
        {
            while(m[i]>0 && s1.find(m[i])!=s1.end())
            {
                m[i]--;
                c++;
            }
            s1.insert(m[i]);
        }
        return c;
        
    }
};