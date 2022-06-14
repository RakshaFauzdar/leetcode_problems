class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        
        int n=nums.size();
        int c=0;
        sort(nums.begin(),nums.end());
        int x=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]<=x)
            {
                x++;
                c+=(x-nums[i]);
                
            }
            else
            {
                x=nums[i];
            }
        }
        return c;
        
    }
};