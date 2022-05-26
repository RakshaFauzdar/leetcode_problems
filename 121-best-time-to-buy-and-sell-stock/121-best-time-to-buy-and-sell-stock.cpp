class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_Profit=0;
        int min_Price=INT_MAX;
        for(int i=0;i<n;i++)
        {
            min_Price=min(prices[i],min_Price);
            max_Profit=max(max_Profit,prices[i]-min_Price);
        }
        
        return max_Profit;
    }
};