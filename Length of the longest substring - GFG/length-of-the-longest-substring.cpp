// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        
       int n=S.size();
      
      long long start=-1;
      long long ans=1;
    vector<long long>m(n);
      for(int i=0;i<n;i++)
      {
          m[S[i]]=-1;
      }
   
      for(int i=0;i<n;i++)
      {
            //  m[S[i]]=i;
           start=max(start,m[S[i]]);
           ans=max(ans,i-start);
        //   cout<<ans<<" ";
            m[S[i]]=i;
            // cout<<m[S[i]]<<" ";
          
      }
      return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}  // } Driver Code Ends