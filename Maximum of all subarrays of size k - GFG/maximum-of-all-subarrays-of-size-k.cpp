//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int>v;
       int a[n];
       int b[n];
       a[0]=arr[0];
       b[n-1]=arr[n-1];
       for(int i=0;i<n;i++)
       {
           if(i%k==0)
           {
               a[i]=arr[i];
           }
           else
           {
               a[i]=max(a[i-1],arr[i]);
               
           }
       }
       
       
       
       for(int i=n-1;i>=0;i--)
       {
           if(i%k==0)
           {
               b[i]=arr[i];
           }
           else
           {
               b[i]=max(b[i+1],arr[i]);
           }
       }
       
       
       for(int i=0;i<=n-k;i++)
       {
           v.push_back(max(b[i],a[i+k-1]));
       }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends