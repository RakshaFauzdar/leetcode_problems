class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=n-k;
        vector<int>q;
        
        for(int num:nums)
        {
            while(!q.empty() && ans>0 && q.back()>num)
            {
              
                q.pop_back();
                ans--;
            }
            q.push_back(num);
        }
        
        
        
        
        
        
        return vector<int>(q.begin(),q.begin()+k);
        
    }
};