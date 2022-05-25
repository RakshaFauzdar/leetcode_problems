class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(nums[i]>0)
        {
            int j=nums[i];
            nums[i]=0;
            i=j;
        }
        
        return i;
        
        
    }
};