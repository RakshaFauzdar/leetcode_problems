class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        
        
        int n=nums.size();
        bool c=false;
        int x=nums[0];
        vector<int>v(n);
        
        for(int i=1;i<n;i++)
        {
            
            if(nums[i]<=x)
            {
                
                if(c)
                {
                    return false;
                }
                c=true;;
                if(i==1 || nums[i]>nums[i-2])
                {
                    x=nums[i];
                }
                
            }
            else
            {
            x=nums[i];
            }
            
        }
        
        return true;
        
    }
};