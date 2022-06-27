class Solution {
public:
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int sum=0,sum1=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums1[i];
            sum1+=nums2[i];
        }
        int ans=max(sum,sum1);
        int c=0,c1=0;
        int mx=0,mx1=0;
        for(int i=0;i<n;i++)
        {
            c+=(nums1[i]-nums2[i]);
            c1+=(nums2[i]-nums1[i]);
            
            mx=max(mx,c);
            mx1=max(mx1,c1);
            
            if(c<0)
            {
                c=0;
            }
            if(c1<0)
            {
                c1=0;
            }
            
        }
        
       int d=max(ans,sum1+mx);
        int d1=max(ans,sum+mx1);
        return max(d,d1);
    }
};