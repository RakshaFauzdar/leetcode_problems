class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ans="";
        int n=columnNumber;
        while(n>0)
        {
           n--;
            int curr=n%26;
           
            n=n/26;
            ans+=(curr+'A');
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};