class Solution {
public:
    int climbStairs(int n) {
        
        if(n<=1)
        {
            return n;
        }
        
        
        int a=1,b=2;
        int ans;
        for(int i=3;i<=n;i++)
        {
            int curr=a+b;
            a=b;
            b=curr;
            ans=curr;
        }
        
        return ans;
        
    }
};