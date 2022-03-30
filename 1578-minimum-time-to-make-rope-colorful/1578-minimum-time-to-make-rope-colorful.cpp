class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        // int m=colors.size();
        int c=0;
        int mi=0;
        int sum=0;
        int ans=neededTime[0];
        
        for(int i=1;i<n;i++)
        {
            if(colors[i]!=colors[i-1]  && i>0)
                ans=0;
           
            sum+=min(ans,neededTime[i]);
            ans=max(ans,neededTime[i]);
            
        }
        return sum;
    }
};