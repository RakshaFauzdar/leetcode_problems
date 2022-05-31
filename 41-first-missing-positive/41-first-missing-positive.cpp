class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>v,v1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=1)
            {
                v.push_back(nums[i]);
            }
            if(nums[i]<=0)
            {
                v1.push_back(nums[i]);
            }
        }
        if(v1.size()==n)
        {
            return 1;
        }
        if(v[0]!=1)
        {
            return 1;
        }
        v.erase( unique( v.begin(), v.end() ), v.end() );
        for(int i=0;i<v.size();i++)
        {
            int x=i+1;
            if(x!=v[i])
            {
                return x;
            }
        }
        
        return v.size()+1;
    }
};