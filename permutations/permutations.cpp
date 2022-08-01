class Solution {
public:
    void solve(vector<vector<int>>&v,int idx,vector<int>&nums)
    {
        if(idx==nums.size())
        {
            v.push_back(nums);
            return;
        }
        
        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[i],nums[idx]);
            solve(v,idx+1,nums);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        solve(ans,0,nums);
        return ans;
        
    }
};