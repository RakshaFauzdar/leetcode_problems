class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        int cnt_vowel=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                cnt_vowel++;
            }
        }
        
        if(cnt_vowel%2==0)
        {
            int m=n/2;
            int cnt=0,cnt1=0;
            for(int i=0;i<m;i++)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                cnt++;
            }
                
            }
            
            
             for(int i=m;i<n;i++)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                cnt1++;
            }
                
            }
            
            
            if(cnt==cnt1)
            {
                return true;
            }
        }
        
        
        return false;
       
        
    }
};