class Solution {
public:
    string shortestPalindrome(string s) {
        
        int n=s.size();
        // string s="";
        int i=0;
        for(int j=n-1;j>=0;j--)
        {
            if(s[i]==s[j])
            {
                i++;
            }
        }
        
        if(i==n)
        {
            return s;
        }
        
        string s1=s.substr(i,n);
        reverse(s1.begin(),s1.end());
        // cout<<s1<<" ";
        
        return s1+shortestPalindrome(s.substr(0,i))+s.substr(i);
        
    }
};