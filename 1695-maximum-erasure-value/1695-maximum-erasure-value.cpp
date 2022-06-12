class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        unordered_set<int>s;
        int i=0,j=0;
        int res=0;
        while(i<n)
        {
            while(s.count(nums[i])>0)
            {
                s.erase(nums[j]);
                sum-=nums[j];
                j++;
            }
            sum+=nums[i];
            s.insert(nums[i++]);
            res=max(res,sum);
            
        }
        return res;
    }
};