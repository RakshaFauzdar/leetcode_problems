// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            int n=A.size();
            int m1=B.size();
            int m[256]={0};
            int m2[256]={0};
            for(int i=0;i<n;i++)
            {
                m[A[i]]=1;
            }
            for(int i=0;i<m1;i++)
            {
                m2[B[i]]=1;
            }
            string s="";
            for(int i=0;i<256;i++)
            {
                if(m[i]^m2[i])
                {
                    s+=char(i);
                }
            }
            if(!s.empty())
            return s;
            else
            return "-1";
            
        }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends