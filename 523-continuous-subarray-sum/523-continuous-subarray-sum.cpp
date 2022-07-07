class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        m[0]=-1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(k!=0)
            {
            sum=sum%k;
            }
            if(m.count(sum) && (i-m[sum])>=2)
            {
                return true;
            }
            if(!m.count(sum))
            m[sum]=i;
        }
        return false;
        
    }
};