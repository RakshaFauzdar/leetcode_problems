// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:


    void solve(vector<int>&nums,int l,int e,vector<int>&ans)
    {
        if(l>e)return ;
        int m=(l+e)/2;
        ans.push_back(nums[m]);
        solve(nums,l,m-1,ans);
        solve(nums,m+1,e,ans);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
       int n=nums.size();
       vector<int>v;
       solve(nums,0,n-1,v);
       return v;
       
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends