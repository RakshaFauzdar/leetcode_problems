class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        
        int n=nums.size();
        int ans=0;
        // sort(nums.begin(),nums.end());
        set<int>s;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                s.insert(nums[i]);
            }
            else
            {
                s.insert(nums[i]*2);
            }
        }
        
        int diff=*s.rbegin()-*s.begin();
        while(*s.rbegin()%2==0)
        {
            int top=*s.rbegin();
            s.erase(top);
            
            s.insert(top/2);
            
            
            diff=min(diff,*s.rbegin()-*s.begin());
        }
        
        return diff;
        
    }
};