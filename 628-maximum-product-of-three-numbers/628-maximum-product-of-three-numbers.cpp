class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int mx=INT_MIN;
        int mx1=INT_MIN;
        int mx2=INT_MIN;
        int mn=INT_MAX;
        int mn1=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>mx)
            {
                mx2=mx1;
                mx1=mx;
                mx=nums[i];
            }
            else if(nums[i]>mx1)
            {
                mx2=mx1;
                mx1=nums[i];
            }
            else if(nums[i]>mx2)
            {
                mx2=nums[i];
            }
            
            
            if(nums[i]<mn)
            {
                mn1=mn;
                mn=nums[i];
            }
            else if(nums[i]<mn1)
            {
                mn1=nums[i];
            }
        }
        
        
        return max(mn*mn1*mx,mx1*mx*mx2);
        
    }
};