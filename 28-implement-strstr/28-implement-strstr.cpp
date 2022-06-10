class Solution {
public:
    bool is(string a,string b)
    {
        return a==b;
    }
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
       int k=n-m;
        for(int i=0;i<=k;i++)
        {
            if(is(haystack.substr(i,m),needle))
                return i;
        }
        return -1;
        
    }
};