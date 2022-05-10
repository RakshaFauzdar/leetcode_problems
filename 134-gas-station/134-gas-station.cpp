class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_fuel=0;
        int total_cost=0;
        int n=gas.size();
        
        for(int i=0;i<n;i++)
        {
            total_fuel+=gas[i];
            total_cost+=cost[i];
            
        }
        if(total_fuel<total_cost)
        {
            return -1;
        }
        
        int fuel=0,c=0;
        for(int i=0;i<n;i++)
        {
            if(c<0)
            {
                fuel=i;
                c=0;
            }
            c+=(gas[i]-cost[i]);
            
        }
        return fuel;
        
    }
};