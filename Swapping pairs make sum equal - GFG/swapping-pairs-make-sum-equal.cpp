// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
                  int sum=0,sum1=0;
                  for(int i=0;i<n;i++)
                  {
                      sum+=A[i];
                  }
                  
                  for(int i=0;i<m;i++)
                  {
                      sum1+=B[i];
                  }
                  
                  
                  sort(A,A+n);
                  sort(B,B+m);
                  int i=0,j=0;
                  while(i<n && j<m)
                  {
                      int a=sum-(A[i])+B[j];
                      int b=sum1-(B[j])+A[i];
                      if(a==b)
                      return 1;
                      else if(a>b)
                      {
                          i++;
                      }
                      else
                      {
                          j++;
                      }
                  }
                  
                  return -1;
	}
 

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends