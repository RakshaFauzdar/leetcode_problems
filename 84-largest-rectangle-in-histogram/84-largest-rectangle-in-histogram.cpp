class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0,i=0;
        heights.push_back(0);
        stack<int>s;
        while(i<n+1)
        {
            while(!s.empty() && heights[s.top()]>heights[i])
            {
                int t=s.top();
                int h=heights[t];
                s.pop();
                if(s.empty())
                {
                    ans=max(ans,h*i);
                }
                else
                {
                    int l=i-s.top()-1;
                    ans=max(ans,l*h);
                }
            }
           
            s.push(i);
            i++;
        }
        return ans;
        
    }
};