class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==0)
            return 0;
        int c=1;
        int mx=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1])
            {
            
            if(nums[i]==nums[i-1]+1)
            {
                c++;
            }
            
            else
            {
                mx=max(mx,c);
                c=1;
            }
            }
        }
        return max(c,mx);
        
    }
};