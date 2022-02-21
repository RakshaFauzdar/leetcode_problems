class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c=n/2;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            if(++m[nums[i]]>n/2)
            {
                return nums[i];
            }
        }
        return false;
        
    }
};