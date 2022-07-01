// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
          int n=str.size();
          set<char>s;
          for(int i=0;i<n;i++)
          {
              s.insert(str[i]);
          }
          int mx=INT_MAX;
          int j=0;
          unordered_map<char,int>m;
          for(int i=0;i<n;i++)
          {
              m[str[i]]++;
              while(j<=i && m.size()==s.size())
              {
                  mx=min(mx,i-j+1);
                  m[str[j]]--;
                  if(m[str[j]]==0)
                  {
                      m.erase(str[j]);
                  }
                  j++;
              }
          }
          return mx;
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