// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int countOfSubstrings(string S, int K) {
        int n=S.size();
        unordered_map<char,int>m;
        for(int i=0;i<K;i++)
        {
            m[S[i]]++;
        }
        
        int cnt=0;
        if(m.size()==K-1)
        {
            cnt++;
        }
        for(int i=K;i<n;i++)
        {
            m[S[i]]++;
            m[S[i-K]]--;
            if(m[S[i-K]]==0)
            {
                m.erase(S[i-K]);
            }
            
            if(m.size()==K-1)
            {
                cnt++;
            }
        }
        return cnt;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>S;
        cin>>K;

        Solution ob;
        cout << ob.countOfSubstrings(S,K) << endl;
    }
    return 0;
}  // } Driver Code Ends