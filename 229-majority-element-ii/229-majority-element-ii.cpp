class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0,cnt2=0;
        int maj1=0,maj2=0;
        for(int i=0;i<n;i++)
        {
           if(maj1==nums[i])
            {
                cnt1++;
            }
            else if(maj2==nums[i])
            {
                cnt2++;
            }
           else if(cnt1==0)
            {
                cnt1++;
                maj1=nums[i];
            }
            else if(cnt2==0)
            {
                cnt2++;
                maj2=nums[i];
            }
            // else if(maj1==nums[i])
            // {
            //     cnt1++;
            // }
            // else if(maj2==nums[i])
            // {
            //     cnt2++;
            // }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        
        cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(maj1==nums[i])
            {
                cnt1++;
            }
            else if(maj2==nums[i])
            {
                cnt2++;
            }
        }
        
        vector<int>ans;
        if(cnt1>(n/3))
        {
            ans.push_back(maj1);
        }
        if(cnt2>(n/3))
        {
            ans.push_back(maj2);
        }
        
        return ans;
       
        
        
    }
};