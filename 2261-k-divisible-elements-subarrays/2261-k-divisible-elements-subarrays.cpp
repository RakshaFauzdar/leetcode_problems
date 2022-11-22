class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        
        int n=nums.size();
        // int ans=0;
        int cnt=0;
        set<vector<int>>ans;
        for(int i=0;i<n;i++)
        {
            vector<int>v;
            int c=0;
            for(int j=i;j<n;j++)
            {
                 v.push_back(nums[j]);
                if(nums[j]%p==0)
                {
                    c++;
                    // v.push_back(nums[j]);
                }
                
                if(c>k)
                {
                    break;
                }
                
                ans.insert(v);
               
            }
            
        }
        int sol=ans.size();
        return sol;
        
        
    }
};