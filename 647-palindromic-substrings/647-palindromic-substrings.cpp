class Solution {
public:
    int is(string s,int l,int r,int&c)
    {
        int n=s.length();
        if(n==0 || l>r)
            return 0;
        while(l>=0 && r<n && s[l]==s[r])
        {
            l--;
            r++;
            c++;
        }
        return c;
    }
    int countSubstrings(string s) {
        int n=s.length();
        if(n==0)
            return 0;
        
        int c=0;
        for(int i=0;i<n;i++)
        {
            is(s,i,i,c);
            is(s,i,i+1,c);
        }
        return c;
        
    }
};