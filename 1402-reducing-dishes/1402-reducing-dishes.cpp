class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
        int ans=0;
        int res=0;
        for(int i=n-1;i>=0;i--)
        {
            if(satisfaction[i]+ans<0)
            {
                break;
            }
            ans+=satisfaction[i];
            res+=ans;
        }
        
        return res;
        
    }
};