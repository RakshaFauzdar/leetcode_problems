class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        int a[n];
        int b[n];
        a[0]=nums[0];
        b[n-1]=nums[n-1];
        for(int i=0;i<n;i++)
        {
            if(i%k==0)
            {
                a[i]=nums[i];
            }
            else
            {
                a[i]=max(a[i-1],nums[i]);
            }
        }
        
        
        for(int i=n-2;i>=0;i--)
        {
            if(i%k==0)
            {
                b[i]=nums[i];
            }
            else
            {
                b[i]=max(b[i+1],nums[i]);
            }
        }
        vector<int>v;
        for(int i=0;i<=n-k;i++)
        {
            v.push_back(max(b[i],a[i+k-1]));
        }
        return v;
        
    }
};