class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int r=0,b=0,w=0;
        for(int i:nums)
        {
            if(i==0)
            {
               // nums[r]=0;
               //  r++;
                nums[w]=2;
                w++;
                nums[b]=1;
                b++;
                 nums[r]=0;
                r++;
            }
            else if(i==1)
            {
                // nums[b]=1;
                // b++;
                nums[w]=2;
                w++;
                nums[b]=1;
                b++;
            }
            else
            {
                w++;
            }
        }
        
    }
};