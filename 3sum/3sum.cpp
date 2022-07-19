class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
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
                long long sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    v.push_back({nums[i],nums[j],nums[k]});
                    int x=nums[j];
                    while(j<n && x==nums[j])
                    {
                        j++;
                    }
                    x=nums[k];
                    while(k>=0 && x==nums[k])
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