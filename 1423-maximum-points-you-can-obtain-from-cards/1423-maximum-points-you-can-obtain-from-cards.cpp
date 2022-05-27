class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0;
        int i=0,j=n-1;
        for(int i=0;i<k;i++)
        {
            sum+=cardPoints[i];
        }
        int res=0;
        res=sum;
        for(int i=0;i<k;i++)
        {
            sum+=cardPoints[n-i-1]-cardPoints[k-i-1];
            if(sum>res)
            {
                res=sum;
                
            }
        }
        
        return res;
        
        
    }
};