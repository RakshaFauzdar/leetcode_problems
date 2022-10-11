class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        // int mx=1;
       vector<int>a(n,-1);
        vector<int>b(n,-1);
        int mi=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[mi])
            {
                a[i]=mi;
            }
            else
            {
                mi=i;
            }
            
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<"\n";
        int mx=n-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[mx])
            {
                b[i]=mx;
                
            }
            else
            {
                mx=i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=-1 && b[i]!=-1)
            {
                return true;
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<b[i]<<" ";
        // }
       
       
        return false;
        
    }
};