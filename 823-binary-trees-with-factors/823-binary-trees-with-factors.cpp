class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        long long c=0;
        unordered_map<int,int>mp;
        long long mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]=1;
            for(int j=0;j<i;j++)
            {
                if(arr[i]%arr[j]==0)
                {
                    mp[arr[i]]=(mp[arr[i]]%mod+mp[arr[j]]%mod*mp[arr[i]/arr[j]]%mod)%mod;
                }
            }
            c=(c+mp[arr[i]])%mod;
        }
        
        return c;
    }
};