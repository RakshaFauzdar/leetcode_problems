class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int ans=INT_MIN;
        int i=0,j=n-1;
        while(i<j)
        {
            int w=min(height[i],height[j]);
            int p=(j-i);
            int ans1=w*p;
            if(ans1>ans)
            {
                ans=ans1;
            }
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
        
    }
};