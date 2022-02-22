class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        for(auto ch:columnTitle)
        {
            int sol=ch-'A'+1;
            ans=ans*26+sol;
            
        }
        return ans;
        
        
    }
};