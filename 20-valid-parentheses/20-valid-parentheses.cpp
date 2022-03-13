class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                s1.push(s[i]);
            }
            else
            {
                if(s1.empty() || (s1.top()=='(' && s[i]!=')') || (s1.top()=='{' && s[i]!='}') || (s1.top()=='[' && s[i]!=']'))
            {
               
                return false;
            }
                s1.pop();
            }
        }
        return s1.empty();
        
        
    }
};