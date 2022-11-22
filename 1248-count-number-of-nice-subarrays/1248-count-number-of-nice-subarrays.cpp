class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        
        int n=nums.size();
        int sum=0;
       int ans=0;
        int count=0;
        int i=0,j=0;
        int odd=0;
        while(i<n)
        {
            if(nums[i]%2!=0)
            {
                odd++;
                count=0;
            }
            
            while(odd==k)
            {
                count++;
                if(nums[j]%2!=0)
                {
                    odd--;
                    j++;
                   
                }
                else
                {
                    j++;
                }
               
            }
            
            ans+=count;
            i++;
        }
        return ans;
    }
};