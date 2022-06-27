class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0;
        int c1=0;
        int d=0;
        int n=s.length();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
           if(s[i]=='(')
           {
               d++;
               
           }
            else
            {
                d--;
            }
           if(d==-1)
           {
               c1++;
               d++;
           }
           
        }
        
        return c1+d;
        
        
    }
};