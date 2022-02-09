class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        // sort(nums.begin(),nums.end());
        int c=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        if(k>0)
        {
            for(auto it :m)
            {
                if(m.find(it.first+k)!=m.end())
                {
                    c++;
                }
            }
        }
        else
        {
            for(auto it :m)
            {
                if(it.second>1)
                {
                    c++;
                }
            }
        }
        // int i=0,j=1;
        // while(i<n  && j<n)
        // {
        //     if(nums[j]-nums[i]==k && i!=j)
        //     {
        //         while(i+1<n && nums[i+1]==nums[i])
        //         {
        //             i++;
        //         }
        //         while(j+1<n && nums[j+1]==nums[j])
        //         {
        //             j++;
        //         }
        //         i++;
        //         j++;
        //         count++;
        //     }
        //     else if(nums[j]-nums[i]>k )
        //     {
        //         i++;
        //     }
        //     else
        //     {
        //         j++;
        //     }
        // }
        return c;
        
    }
};