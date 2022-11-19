class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        int low=0,high=n-1;
        int ans=0;
        int mi=0,ma=0;
        while(low<=high)
        {
            if(height[low]<height[high])
            {
                mi=max(mi,height[low]);
                ans+=(mi-height[low]);
                low++;
            }
            else
            {
                ma=max(ma,height[high]);
                ans+=(ma-height[high]);
                high--;
            }
        }
        
        return ans;
        
        
    }
};