class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.length();
        vector<int>v(256,-1);
        int mx=INT_MIN;
        int c=0;
        for(int i=0;i<n;i++)
        {
            // cout<<v[s[i]]<<' ';
            if(v[s[i]]>mx)
            {
                mx=v[s[i]];
            }
            v[s[i]]=i;
            
            c=max(c,i-mx);
            // cout<<mx<<" ";
        }
        
        return c;
        
    }
};