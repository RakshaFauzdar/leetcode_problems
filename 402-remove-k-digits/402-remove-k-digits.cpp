class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        int n=num.size();
        for(int i=0;i<n;i++)
        {
            while(ans.size() && k && ans.back()>num[i])
            {
                ans.pop_back();
                k--;
            }
            if(ans.size() || num[i]!='0')
            {
                ans.push_back(num[i]);
            }
        }
        
        while(ans.size() && k--)
        {
            ans.pop_back();
        }
        if(ans.empty())
        {
            return "0";
        }
        else
        {
            return ans;
        }
        
    }
};