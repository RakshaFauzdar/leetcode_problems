// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
       unordered_map<char,int>m;
       int n=str.size();
       for(int i=0;i<n;i++)
       {
           m[str[i]]++;
       }
       int k=m.size();
       m.clear();
       int j=0;
       int ans=INT_MAX;
       for(int i=0;i<n;i++)
       {
           m[str[i]]++;
           while(j<=i && m.size()==k)
           {
               ans=min(ans,i-j+1);
               m[str[j]]--;
               if(m[str[j]]==0)
               {
                   m.erase(str[j]);
               }
                
               j++;
               
           }
           
       }
       return ans;
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends