class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int mx=0;
        unordered_map<int,int>m;
        m[0]=-1;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                mx++;
            }
            else
            {
                mx--;
            }
            if(m.find(mx)!=m.end())
            {
                ans=max(ans,i-m[mx]);
                
            }
            else
            {
                m[mx]=i;
            }
        }
        return ans;
        
        
    }
};