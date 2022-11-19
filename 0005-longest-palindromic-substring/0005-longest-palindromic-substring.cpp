class Solution {
public:
    string longestPalindrome(string s) {
        
        int n=s.size();
       
        int mx=1;
        int low,high;
        int start=0;
        for(int i=1;i<n;i++)
        {
            low=i-1;
            high=i;
            while(low>=0 && high<n && s[low]==s[high])
            {
                if(mx<high-low+1)
                {
                    start=low;
                    mx=high-low+1;
                }
                low--;
                high++;
            }
            
            low=i+1;
            high=i-1;
             while(low>=0 && high<n && s[low]==s[high])
            {
                if(mx<high-low+1)
                {
                    start=low;
                    mx=high-low+1;
                }
                low--;
                high++;
            }
            
            
        }
        
        
        return s.substr(start,mx);
        
        
    }
};