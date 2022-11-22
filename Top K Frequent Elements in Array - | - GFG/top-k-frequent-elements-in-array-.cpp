//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        int n=nums.size();
        vector<pair<int,int>>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it:mp)
        {
            ans.push_back({it.second,it.first});
        }
        
        
        sort(ans.rbegin(),ans.rend());
        vector<int>sol;
        for(int i=0;i<k;i++)
        {
            sol.push_back(ans[i].second);
        }
        
        
        return sol;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends