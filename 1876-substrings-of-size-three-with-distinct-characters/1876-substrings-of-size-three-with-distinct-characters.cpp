class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.length();
        int d=0;
        char a=s[0],b=s[1],c=s[2];
        for(int i=3;i<=n-1;i++)
        {
            if(a!=b && b!=c && a!=c)
            {
                d++;
            }
            
                a=b;
                b=c;
                c=s[i];
            
        }
        if(a!=b && b!=c && c!=a)
        {
            d++;
        }
        return d;
    }
};