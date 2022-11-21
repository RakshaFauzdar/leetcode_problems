class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max_sum=INT_MIN;
int sum_array=0;
for(int i=0;i<nums.size();i++)
{

     sum_array+=nums[i];
   if(sum_array>max_sum)
{
     max_sum=sum_array;
 
}

if(sum_array<0)
{  
sum_array=0;
}
}
return max_sum;

        
    }
};