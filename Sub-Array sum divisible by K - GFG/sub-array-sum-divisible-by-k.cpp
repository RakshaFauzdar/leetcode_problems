// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	long long subCount(long long arr[], int N, long long K)
	{
	    long long ans=0;
	    long long c=0;
	    unordered_map<int,int>m;
	    m[0]++;
	    for(int i=0;i<N;i++)
	    {
	        ans+=arr[i];
	        long long r=ans%K;
	        if(r<0)
	        {
	            r+=K;
	        }
	        if(m.find(r)!=m.end())
	        {
	            c+=m[r];
	        }
	        m[r]++;
	    }
	    
	    return c;
	    // Your code goes here
	}



};


// { Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	long long k;
		cin>>n >> k;
		long long a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
        

        Solution ob;
        cout << ob.subCount(a, n, k);
	    cout << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends