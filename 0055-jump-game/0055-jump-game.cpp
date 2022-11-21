class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        
        int n=nums.size();
        int mx_jump=nums[0];
        for(int i=0;i<n;i++)
        {
            if(i>mx_jump)
            {
                return false;
            }
            mx_jump=max(mx_jump,i+nums[i]);
        }
        
        return true;
            
        
        
    }
};