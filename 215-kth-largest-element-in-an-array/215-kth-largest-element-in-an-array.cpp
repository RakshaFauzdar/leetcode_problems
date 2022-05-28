class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        
        int n=nums.size();
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            pq.push(nums[i]);
        }
        int ans=0;
        while(pq.size()>0 && k>0)
        {
            int x=pq.top();
            pq.pop();
            ans=x;
            k--;
        }
        return ans;
        
        
    }
};