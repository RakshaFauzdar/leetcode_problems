class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int m=nums[n/2];
        int c=0;
        for(int i=0;i<n;i++)
        {
            c+=(abs(m-nums[i]));
        }
        
        return c;
        
    }
};