class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        int sum=0;
        vector<int>v(k);
        v[c]++;
        for(int i=0;i<n;i++)
        {
            c=(c+nums[i])%k;
            if(c<0)
            {
                c+=k;
            }
            sum+=v[c];
            v[c]++;
        }
        return sum;
    }
};