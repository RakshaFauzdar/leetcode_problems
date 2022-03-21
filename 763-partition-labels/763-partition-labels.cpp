class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.length();
        int a[26];
        for(int i=0;i<n;i++)
        {
            a[s[i]-'a']=i;
        }
        int j=0,ans=0;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            j=max(j,a[s[i]-'a']);
            if(i==j)
            {
                v.push_back(i-ans+1);
                ans=i+1;
            }
        }
        return v;
        
    }
};