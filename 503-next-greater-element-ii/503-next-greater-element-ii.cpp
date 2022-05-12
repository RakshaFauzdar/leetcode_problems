class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n=nums.size();
        int m=2*n;
        
        
        stack<int>s;
        vector<int>ans(n,-1);
        for(int i=0;i<m;i++)
        {
            int d=nums[i%n];
            while(s.empty()==false && nums[s.top()]<d)
            {
                ans[s.top()]=d;
                s.pop();
            }
            if(i<n)
            {
                s.push(i);
            }
        }
       
        return ans;
        
    }
};