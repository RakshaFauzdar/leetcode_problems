class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int mi=INT_MAX;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            mi=min(mi,nums[i]);
        }
        
        
        return sum-mi*n;
        
        
        
    }
};