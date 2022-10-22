class Solution {
public:
    string minWindow(string s, string t) {
        
        int n=s.size();
        int m=t.size();
        int v[256]={0};
        int  v1[256]={0};
        for(int i=0;i<m;i++)
        {
            v[t[i]]++;
        }
        
        
        
        int start=-1;
        int ans=INT_MAX;
        int j=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            v1[s[i]]++;
            if(v1[s[i]]<=v[s[i]])
            {
                c++;
            }
            
            if(c==m)
            {
                while(v1[s[j]]>v[s[j]] || v[s[j]]==0)
                {
                    if(v1[s[j]]>v[s[j]])
                    {
                        v1[s[j]]--;
                        
                    }
                    j++;
                }
                int diff=i-j+1;
                if(ans>diff)
                {
                    ans=diff;
                    start=j;
                }
            }
        }
        
        if(start==-1)
            return "";
        else
            return s.substr(start,ans);
        
    }
};