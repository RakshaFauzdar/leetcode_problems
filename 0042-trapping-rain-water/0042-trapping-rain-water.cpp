class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        int mi=0,ma=0;
        int lo=0,ho=n-1;
        long long ans=0;
        while(lo<=ho)
        {
            if(height[lo]<height[ho])
            {
               mi=max(height[lo],mi);
               ans+=(mi-height[lo]);
                lo++;
            }
            else
            {
               ma=max(ma,height[ho]);
               ans+=(ma-height[ho]);
                ho--;
            }
        }
        
        return ans;
        
        
    }
};