class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0,x=0;
        for(int i=1;i<n;i++)
        {
            ans+=prices[i]-prices[i-1];
            x=max(x,ans);
            ans=max(ans,0);
        }
        return x;
        
    }
};