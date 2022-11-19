class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n=nums.size();
        int ans=0;
        int jumps=0;
        int curr_jump=0;
        for(int i=0;i<n-1;i++)
        {
           
            ans=max(ans,i+nums[i]);
            cout<<ans<<" ";
            if(curr_jump==i)
            {
               jumps++;
                curr_jump=ans;
                
            }
        }
        return jumps;
        
    }
};