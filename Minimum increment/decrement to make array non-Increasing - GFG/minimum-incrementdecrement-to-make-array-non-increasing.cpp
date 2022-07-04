// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>

using namespace std;



 // } Driver Code Ends


class Solution{
public:
    int minOperations(int *a,int n)
    {
       int c=0;
       
       priority_queue<int>p;
       for(int i=n-1;i>=0;i--)
       {
           if(!p.empty() && p.top()>a[i])
           {
               c+=abs(a[i]-p.top());
               p.pop();
               p.push(a[i]);
           }
           p.push(a[i]);
       }
       return c;
        
        
    }
};

// { Driver Code Starts.

int main() {
    
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int  a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        Solution ob;
        cout<<ob.minOperations(a,n)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends