// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
  public:
    vector<int> PosNegPair(int a[], int n) {
        
        vector<int>v;
        sort(a,a+n);
        int j=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                j=i;
                break;
            }
        }
        j--;
        int i=j+1,k=0;
        while(i<n && j>=0)
        {
            // int sum=a[i]+a[j];
            if(abs(a[j])==a[i])
            {
                v.push_back(a[j]);
                v.push_back(a[i]);
                j--;
            }
            else if(abs(a[j])<a[i])
            {
                i--;
                j--;
            }
            i++;
        }
        return v;
        
        
        
        
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0) cout << "0";

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends