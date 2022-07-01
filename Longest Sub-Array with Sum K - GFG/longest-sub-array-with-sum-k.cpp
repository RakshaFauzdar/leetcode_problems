// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int sum=0;
        int i=0,j=0;
        int cnt=0;
        unordered_map<int,int>m;
        m[0]=-1;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(m.find(sum-K)!=m.end())
            {
                cnt=max(cnt,i-m[sum-K]);
            }
            m.insert({sum,i});
        }
        return cnt;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends