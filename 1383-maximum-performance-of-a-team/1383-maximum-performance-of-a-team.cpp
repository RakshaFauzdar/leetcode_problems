class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        
        
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<pair<int,int>>v;
        long ans=0;
        long sum=0;
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(efficiency[i],speed[i]));
        }
        
        sort(v.rbegin(),v.rend());
        
        for(int i=0;i<v.size();i++)
        {
            int x=v[i].first;
            int y=v[i].second;
            if(pq.size()==k)
            {
                sum-=pq.top();
                pq.pop();
            }
           
            pq.push(y);
            sum+=y;
            
            ans=max(ans,sum*x);
        }
        int mod=1e9+7;
        return ans%mod;
        
    }
};