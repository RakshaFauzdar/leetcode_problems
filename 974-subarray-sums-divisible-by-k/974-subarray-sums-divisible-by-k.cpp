class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        int ans=0;
       unordered_map<int,int>m;
        m[0]++;
        for(int i=0;i<n;i++)
        {
            ans+=nums[i];
            int r=ans%k;
            if(r<0)
            {
                r+=k;
            }
            if(m.find(r)!=m.end())
            {
                cnt+=m[r];
            }
            m[r]++;
        }
        return cnt;
        
    }
};