class Solution {
public:
    string reversew(string s)
    {
        reverse(s.begin(),s.end());
        return s;
    }
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                string s1="";
                while(i<n && s[i]!=' ')
                {
                    s1+=s[i];
                    i++;
                }
                s1=reversew(s1);
                ans+=s1;
                ans+=' ';
                
            }
            
        }
        ans.pop_back();
        return ans;
        
        
    }
};