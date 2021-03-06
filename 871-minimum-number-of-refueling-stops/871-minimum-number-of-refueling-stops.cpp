class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n=stations.size();
        int curr=startFuel;
        
        int cnt=0;
        int i=0;
        priority_queue<int>pq;
        while(curr<target)
        {
            while(i<n && curr>=stations[i][0])
            {
                pq.push(stations[i][1]);
                i++;
            }
            
            if(pq.empty())
            {
                return -1;
            }
            
            
            int x=pq.top();
            pq.pop();
            
            curr+=x;
            cnt++;
        }
        
        
        return cnt;
        
    }
};