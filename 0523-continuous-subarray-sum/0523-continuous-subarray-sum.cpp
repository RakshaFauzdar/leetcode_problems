class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            
            sum+=nums[i];
            if(k!=0)
            {
                sum=sum%k;
            }
            
            
            if(mp.count(sum) && (i-mp[sum])>=2)
            {
                return true;
            }
            
            
            if(!mp.count(sum))
            {
            
            mp[sum]=i;
            }
            
        }
        return false;
        
    }
};