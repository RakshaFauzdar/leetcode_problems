// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                c0++;
            }
            if(arr[i]==1)
            {
                c1++;
            }
            if(arr[i]==2)
            {
                c2++;
            }
        }
        int i=0;
        while(c0-- && i<n)
        {
            arr[i]=0;
            i++;
        }
        while (c1-- && i<n)
        {
            arr[i]=1;
            i++;
        }
        while( c2-- && i<n)
        {
            arr[i]=2;
            i++;
        }
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends