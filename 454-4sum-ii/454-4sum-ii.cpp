class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int c=0;
        // for(auto i:nums1)
        // {
        //     for(auto j:nums2)
        //     {
        //         for(auto k:nums3)
        //         {
        //             // for(auto l:nums4)
        //             // {
        //                 if(i+j+k+==0)
        //                 {
        //                     c++;
        //                 }
        //             // }
        //         }
        //     }
        // }
        // return c;
        unordered_map<int,int>m;
        for(auto a:nums1)
        {
            // m[a]++;
            for(auto b:nums2)
            {
                m[a+b]++;
            }
        }
        int ans=0;
        
        for(auto c:nums3)
        {
            for(auto d:nums4)
            {
                ans+=m[0-c-d];
                
            }
        }
        
        return ans;
        
    }
};