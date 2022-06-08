class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int j=m-1;
            int mx=-1;
            while(nums2[j]!=nums1[i])
            {
                if(nums2[j]>nums1[i])
                {
                    mx=nums2[j];
                    
                }
                j--;
            }
            v.push_back(mx);
        }
        return v;
           
    }
};