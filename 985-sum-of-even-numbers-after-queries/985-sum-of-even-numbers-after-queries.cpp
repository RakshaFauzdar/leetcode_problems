class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        int n=nums.size();
        int m=queries.size();
        int even_sum=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            even_sum+=nums[i];
        }
        
        vector<int>ans(m);
        for(int i=0;i<m;i++)
        {
            int val =queries[i][0];
            int idx =queries[i][1];
            int sol=nums[idx]+val;
            if(nums[idx]%2==0 && sol%2==0)
            {
                even_sum-=nums[idx];
                even_sum+=sol;
                // nums[idx]=sol;
                
            }
            else if(nums[idx]%2!=0 && sol%2==0)
            {
                even_sum+=sol;
                // nums[idx]=sol;
            }
           else if(nums[idx]%2==0 && sol%2!=0)
           {
               even_sum-=nums[idx];
           }
           
          
            
            
            ans[i]=even_sum;
            nums[idx]=sol;
            
        }
        
        return ans;
        
        
        
        
    }
};