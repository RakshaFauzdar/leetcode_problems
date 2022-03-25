class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        
        int n=costs.size();
        int sum=0;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            sum+=costs[i][0];
            v[i]=costs[i][1]-costs[i][0];
            
                
            
        
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n/2;i++)
        {
            sum+=v[i];
        }
        return sum;
        
    }
};