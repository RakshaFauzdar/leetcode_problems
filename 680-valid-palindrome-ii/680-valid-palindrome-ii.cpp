class Solution {
public:
    bool is(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }

            
    bool validPalindrome(string s) {
        int n=s.length();
       
            int i=0,j=n-1;
            while(i<j)
            {
                if(s[i]==s[j])
                {
                    i++;
                    j--;
                }
                else
                {
                    return is(s,i+1,j) || is(s,i,j-1);
                }
            }
            return true;
            
        
        
    }
};