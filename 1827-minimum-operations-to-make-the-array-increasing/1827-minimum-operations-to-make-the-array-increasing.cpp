class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int i=1,j=0;
        int sum=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]>=nums[i])
            {
                int d=nums[i-1]-nums[i];
                nums[i]=nums[i]+d+1;
                sum+=(d+1);
                
            }
           
        }
        return sum;
        
        
    }
};