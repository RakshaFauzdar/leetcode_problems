// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
       
       
       vector<int>v;
       for(int i=0;i<N;i++)
       {
           int ans=-1;
           for(int j=N-1;j>=i;j--)
           {
               if(Arr[i]>Arr[j])
               {
                   ans=j;
                   break;
                  
               }
           }
           v.push_back(ans);
       }
       return v;
    }
};

// { Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}  // } Driver Code Ends