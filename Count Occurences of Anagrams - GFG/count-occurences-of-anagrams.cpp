// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	int search(string pat, string txt) {
	    int n=pat.size();
	    int m=txt.size();
	    int cnt=0;
	    vector<int>v(26,0);
	    vector<int>v1(26,0);
	    for(int i=0;i<n;i++)
	    {
	        v[txt[i]-'a']++;
	        v1[pat[i]-'a']++;
	    }
	    
	    for(int i=n;i<m;i++)
	    {
	        if(v==v1)
	        {
	            cnt++;
	        }
	        v[txt[i]-'a']++;
	        v[txt[i-n]-'a']--;
	    }
	    if(v==v1)
	    {
	        cnt++;
	    }
	    return cnt;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends