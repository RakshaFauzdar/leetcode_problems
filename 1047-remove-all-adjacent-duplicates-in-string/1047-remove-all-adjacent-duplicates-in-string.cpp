class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        string s1="";
        
        
        for(int i=0;i<n;i++)
        {
            
                if(s1.back()==s[i] && s1.size())
                {
                   s1.pop_back();
                }
                else
                {
                   s1.push_back(s[i]);
                }
            
          
            
        }
    return s1;
        
        
        
        
    }
};