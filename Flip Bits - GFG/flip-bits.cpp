// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        int c=0;
        int c0=0;
        int diff=0;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                c0++;
            }
           
            int val=(a[i]==1)?-1:1;
            c+=val;
            if(c>mx)
            {
                mx=c;
            }
            if(c<0)
            {
                c=0;
            }
        }
        // mx=max(0,mx);
        return c0+mx;
    }
};


// { Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}
  // } Driver Code Ends