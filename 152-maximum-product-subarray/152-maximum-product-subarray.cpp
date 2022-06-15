class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int mx=nums[0],mi=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]<0)
            {
                swap(mi,mx);
            }
            mi=min(mi*nums[i],nums[i]);
            mx=max(mx*nums[i],nums[i]);
            if(mx>ans)
            {
                ans=mx;
            }
            
        }
        return ans;
        
    }
};