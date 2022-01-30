class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int m=arr2.size();
       int ans=0,ans1=0;
        for(int i=0;i<n;i++)
        {
            ans^=arr1[i];
        }
        for(int i=0;i<m;i++)
        {
            ans1^=arr2[i];
        }
        
        return ans1&ans;
        
//         distributive property 
//         (a1^a2)&(b1^b2)
        
        
    }
};