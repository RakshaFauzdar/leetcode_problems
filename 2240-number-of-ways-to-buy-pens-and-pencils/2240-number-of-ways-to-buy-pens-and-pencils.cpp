class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
       long long ans=0;
        long long sum=total/cost1;
        for(int i=0;i<=sum;i++)
        {
            int x=(total-cost1*i)/cost2+1;
            ans+=x;
        }
        return ans;
        
        
    }
};