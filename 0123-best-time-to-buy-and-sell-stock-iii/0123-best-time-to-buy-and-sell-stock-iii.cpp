class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        
        int n=prices.size();
        int min_buy=-prices[0];
        int min_sell=0;
        int max_buy2=INT_MIN;
        int max_sell2=0;
        for(int i=0;i<n;i++)
        {
            min_buy=max(min_buy,-prices[i]);
            min_sell=max(min_sell,min_buy+prices[i]);
            max_buy2=max(max_buy2,min_sell-prices[i]);
            max_sell2=max(max_sell2,max_buy2+prices[i]);
        }
        
        
        return max_sell2;
        
        
        
        
        
        
        
        
        
    }
};