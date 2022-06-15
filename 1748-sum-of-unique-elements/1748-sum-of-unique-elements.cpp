class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int n=nums.size();
        int cnt=0;
        int x=nums[0];
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(auto it:m)
        {
            if(it.second==1)
            {
                cnt+=it.first;
            }
        }
        
        return cnt;
        
    }
};