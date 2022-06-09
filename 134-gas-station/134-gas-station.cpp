class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int ans=0;
        int curr=0;
        for(int i=0;i<n;i++)
        {
            curr+=gas[i]-cost[i];
            if(curr<0)
            {
                curr=0;
                ans=i+1;
            }
        }
        for(int i=0;i<ans;i++)
        {
            curr+=gas[i];
            curr-=cost[i];
            if(curr<0)
            {
                return -1;
            }
        }
        
        return ans;
    }
};