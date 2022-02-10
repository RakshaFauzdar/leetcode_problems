class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        
        int c=0;
        int sum=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum==k)
            {
                c++;
                
                
                
            }
            
            int l=sum-k;
            if(m[l]>0)
            {
                c+=m[l];
            }
            m[sum]++;
        }
        
        return c;
        
    }
};