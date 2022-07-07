// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int subArraySum(int arr[], int n, int sum)
    {
    	unordered_map<int,int>m;
    	int ans=0;
    	int c=0;
    	for(int i=0;i<n;i++)
    	{
    	    ans+=arr[i];
    	    if(ans==sum)
    	    {
    	        c++;
    	    }
    	    if(m.find(ans-sum)!=m.end())
    	    {
    	        c+=m[ans-sum];
    	    }
    	    m[ans]++;
    	}
    	return c;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution ob;
	    cout<<ob.subArraySum(arr, n, sum);
	    cout<<'\n';
	}
	return 0;
}  // } Driver Code Ends