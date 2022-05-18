class Solution {
public:
    int solve(string&s,int n,int k,char x)
    {
        int mx=1;
        int c=0;
        int i=0,j=0;
        while(i<n)
        {
           
            if(s[i]!=x)
            {
                c++;
            }
            
            while(c>k)
            {
                if(s[j]!=x)
                {
                    c--;
                }
                j++;
            }
            mx=max(mx,i-j+1);
            i++;
            
        }
        return mx;
        
    }
    int characterReplacement(string s, int k) {
       int mx=0;
        for(int i=0;i<26;i++)
        {
            mx=max(mx,solve(s,s.length(),k,i+'A'));
        }
        return mx;
        
        
    }
};