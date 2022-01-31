class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int neg=0;
        int fn=-2;
        int fs=-1;
        int l=0;
        for(int i=0;i<n;i++)
        {
            
            if(nums[i]==0)
            {
                neg=0;
                fs=i;
                fn=-2;
                
            }
            else
            {
                if(nums[i]<0)
                {
                    neg++;
                }
                if(neg==1 && fn==-2)
                {
                    fn=i;
                }
                if(neg%2==0)
                {
                    ans=max(ans,i-fs);
                }
                else
                {
                    ans=max(ans,i-fn);
                }
            }
            
            
            
        }
        return ans;
        
    }
};