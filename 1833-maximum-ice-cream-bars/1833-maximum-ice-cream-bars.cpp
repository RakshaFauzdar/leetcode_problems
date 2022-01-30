class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        long c=0;
        sort(costs.begin(),costs.end());
        long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=costs[i];
            if(sum<=coins)
            {
                c++;
            }
            
        }
        return c;
        
    }
};