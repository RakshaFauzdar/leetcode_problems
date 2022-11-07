//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        
        // code here 
        
        int n=S.size();
        string s="";
        string ans="";
        for(int i=n-1;i>=0;i--)
        {
           
            if(S[i]!='.' )
            {
                ans+=S[i];
                
            }
            else
            {
                reverse(ans.begin(),ans.end());
                s+=ans;
                s+=".";
                ans.clear();
            }
        }
        int j=0;
        while(j<n && S[j]!='.')
        {
            s+=S[j];
            j++;
        }
        
        return s;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends