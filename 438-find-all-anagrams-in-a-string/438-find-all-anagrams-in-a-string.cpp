class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.length();
        int m=p.length();
        vector<int>v;
        if(m>n)
        {
            return v;
            
        }
        vector<int>a(26,0);
        vector<int>b(26,0);
        for(auto it:p)
        {
            a[it-'a']++;
        }
        
        
        for(int i=0;i<m;i++)
        {
            b[s[i]-'a']++;
        }
        
        for(int i=m;i<n;i++)
        {
            if(a==b)
            {
                v.push_back(i-m);
            }
            b[s[i-m]-'a']--;
            b[s[i]-'a']++;
        }
        
        if(a==b)
        {
            v.push_back(n-m);
        }
        return v;
    }
};