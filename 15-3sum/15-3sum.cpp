class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                long sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    v.push_back({nums[i],nums[j],nums[k]});
                   int val=nums[j];
                    while(j<n && val==nums[j])
                    {
                        j++;
                    }
                    val=nums[k];
                    while(k>=0 && val==nums[k])
                    {
                        k--;
                    }
                    
                }
                else if(sum>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return v;
        
    }
};