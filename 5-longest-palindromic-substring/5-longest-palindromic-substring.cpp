class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int mx=1;
        int l,h;
        int st=0;
        for(int i=1;i<n;i++)
        {
            l=i-1;
            h=i;
            while(l>=0 && h<n && s[l]==s[h])
            {
                l--;
                h++;
            }
            l++;
            h--;
            if(s[l]==s[h] && h-l+1>mx)
            {
                st=l;
                
                mx=h-l+1;
            }
            
            l=i-1;
            h=i+1;
            while(l>=0 && h<n && s[l]==s[h])
            {
                l--;
                h++;
            }
            l++;
            h--;
            if(s[l]==s[h] && h-l+1>mx)
            {
                st=l;
                mx=h-l+1;
            }
        }
       string a="";
        int ans=mx;
        while(ans--)
        {
            a+=s[st++];
           
        }
        return a;
        
    }
};