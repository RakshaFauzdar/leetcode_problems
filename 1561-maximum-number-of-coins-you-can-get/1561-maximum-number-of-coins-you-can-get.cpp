class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        int ans=0;
        sort(piles.begin(),piles.end());
        int d=n/3;
        for(int i=d;i<n;i+=2)
        {
            ans+=piles[i];
        }
        
        return ans;
        
        
        
    }
};