class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
    
        if(n==0)
            return 0;
       
        int mx=1;
        unordered_set<int>s;
        for(auto it:nums)
        {
            s.insert(it);
        }
        for(int i=0;i<n;i++)
        {
            int x=nums[i]-1;
            int j=0;
            if(s.find(x)!=s.end())
            {
                continue;
            }
            else
            {
                j=nums[i];
                int c=0;
                while(s.find(j)!=s.end())
                {
                    j++;
                    c++;
                }
                mx=max(c,mx);
            }
        }
        return mx;
        
    }
};