class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>v;
        unordered_map<int,int>m;
        int n=nums1.size();
        int m1=nums2.size();
         // unordered_map<int,int>m1;
        for(auto it:nums1)
        {
            m[it]++;
        }
       for(int i=0;i<m1;i++)
       {
           if(m[nums2[i]]>0)
           {
               v.push_back(nums2[i]);
               m[nums2[i]]--;
           }
       }
        return v;
        
        
    }
};