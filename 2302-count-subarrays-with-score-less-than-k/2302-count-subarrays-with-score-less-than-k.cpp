class Solution {
public:
    int cos(vector<int>&arr,
                   int n, long long k)
{
    int start = 0, end = 0,
        count = 0, sum = arr[0];
 
    while (start < n && end < n) {
 
        
        if (sum < k) {
            end++;
 
            if (end >= start)
                count += end - start;
 
            if (end < n)
                sum += arr[end];
        }
 
       
        else {
            sum -= arr[start];
            start++;
        }
    }
 
    return count;
}
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        long long c=0;
        long long sum=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            while( sum*(i-j+1)>=k)
            {
                sum-=nums[j++];
                
            }
            c+=(i-j+1);
        }
        return c;
        
        
    }
};