// { Driver Code Starts
// C++ Program to count pairs whose sum divisible
// by '4'
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int count4Divisibiles(int arr[], int n)
    {
        int  c=0;
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i]%4;
        }
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            if(m.find((4-arr[i])%4)!=m.end())
            {
                c+=m[(4-arr[i])%4];
            }
            m[arr[i]%4]++;
            // cout<<m[arr[i]%4]<<" ";
        }
        return c;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
         cin>>arr[i];
        Solution ob;
        cout << ob.count4Divisibiles(arr, n)<<endl;
    }
 
    return 0;
}  // } Driver Code Ends