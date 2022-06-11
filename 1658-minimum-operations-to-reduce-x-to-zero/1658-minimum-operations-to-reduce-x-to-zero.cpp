class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int j=0;
        int d=x;
        int c=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=nums[i];
        }
        ans-=d;
        if(ans<0)
        {
            return -1;
        }
        if(ans==0)
            return n;
        
        int sum=0;
       
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            while(sum>ans)
            {
                sum-=nums[j];
                j++;
            }
            if(sum==ans)
            {
                c=max(c,i-j+1);
            }
        }
        if(c==0)
            return -1;
        else
            return n-c;
        
    }
};