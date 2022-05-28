class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        int c=0;
        
        priority_queue<int>q;
        int d=0;
        for(int i=0;i<n-1;i++)
        {
            
            int diff=heights[i+1]-heights[i];
            if(diff>0)
            {
                q.push(-diff);
                               
            }
            if(q.size()>ladders)
            {
                bricks+=q.top();
                q.pop();
            }
            if(bricks<0)
            {
                return i;
            }
        }
        return n-1;
        
    }
};