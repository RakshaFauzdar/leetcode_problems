class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>v;
        int i=0,j=n;
        int sum=0;
        while(i<j)
        {
            sum+=nums[i];
            v.push_back(sum);
            i++;
        }
        
        return v;
        
    }
};