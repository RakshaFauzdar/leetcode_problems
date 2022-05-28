class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        set<vector<int>>s1;
        long long mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                long long s=j+1;
                long long e=n-1;
                while(s<e)
                {
                    long sum=(nums[i]+nums[j])%mod+(nums[s]+nums[e])%mod;
                    if(sum==target)
                    {
                        s1.insert({nums[i],nums[j],nums[s],nums[e]});
                        s++;
                        e--;
                    }
                    else if(sum>target)
                    {
                        e--;
                    }
                    else
                    {
                        s++;
                    }
                }
            }
        }
        for(auto it:s1)
        {
            v.push_back(it);
        }
        
        return v;
    }
};