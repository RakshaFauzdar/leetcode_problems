class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        int first=cost[0];
        int second=cost[1];
        
        if(n<=1)
        {
            return cost[n];
        }
        for(int i=2;i<n;i++)
        {
            int curr=cost[i]+min(first,second);
            first=second;
            second=curr;
        }
        
        return min(first,second);
        
    }
};