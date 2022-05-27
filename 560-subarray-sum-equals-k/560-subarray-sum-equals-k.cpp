class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        int sum=0,ans=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            ans+=nums[i];
            if(ans==k)
            {
                c++;
            }
            if(m.find(ans-k)!=m.end())
            {
                c+=m[ans-k];
            }
            
            m[ans]++;
        }
        
        
        return c;
        
    }
};