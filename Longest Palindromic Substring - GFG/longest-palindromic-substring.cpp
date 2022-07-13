// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string S){
        
        int mx=1;
        int n=S.length();
        int start=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                bool flag=true;
                int m=j-i+1;
                for(int k=0;k<m/2;k++)
                {
                    if(S[i+k]!=S[j-k])
                    {
                        flag=false;
                    }
                }
                if(flag && m>mx)
                {
                    start=i;
                    mx=m;
                }
            }
        }
        
        return S.substr(start,mx);
    }
};

// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends