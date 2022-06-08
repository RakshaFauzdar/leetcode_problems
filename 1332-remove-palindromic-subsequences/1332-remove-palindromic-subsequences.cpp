class Solution {
public:
    bool is(string s)
    {
        int n=s.length();
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
                return false;
        }
        return true;
    }
    int removePalindromeSub(string s) {
        int n=s.length();
        if(n==0)
            return 0;
        if(is(s)==true)
            return 1;
        else
            return 2;
        
        
    }
};