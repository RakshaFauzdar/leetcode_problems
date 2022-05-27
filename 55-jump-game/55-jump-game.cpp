class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int flag=0;
        for(int i=n-2;i>=0;i--)
        {
            c++;
            if(nums[i]>=c)
            {
                c=0;
            }
        }
        if(c==0)
            return true;
        return false;
        
    }
};