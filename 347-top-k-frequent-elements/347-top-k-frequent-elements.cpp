class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it:m)
        {
            pq.push(make_pair(it.second,it.first));
        }
        vector<int>v;
        for(int i=0;i<k;i++)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        
        return v;
    }
};