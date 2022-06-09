// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
        
        
        
        
        vector<int> vec(n,-1); // vector for answer
       stack<int> s; // stack to get previous smaller and next smaller elements
       int ps[n]; // to store previous smaller values
       for(int i=0;i<n;i++) // code to get previous smaller elements 
       {
           while(!s.empty()&&arr[s.top()]>=arr[i])
           s.pop();
           if(s.empty())
           ps[i]=-1;
           else
           ps[i]=s.top();
           s.push(i);
       }
       
       while(!s.empty()) // emptying the stack to reuse it
       s.pop();
       
       int ns[n]; // to store next smaller elements
       for(int i=n-1;i>=0;i--) // code to get next smaller elements
       {
           while(!s.empty()&&arr[s.top()]>=arr[i])
           s.pop();
           if(s.empty())
           ns[i]=n;
           else
           ns[i]=s.top();
           s.push(i);
       }
   
       for(int i=0;i<n;i++) // get the window size and fix the element
       {
           int num = ns[i]-ps[i]-2; // num will always be in range as ns[i] max value is n and ps[i] min value is -1
           vec[num]=max(vec[num],arr[i]); // store the maximum of the minimum of same size windows
       }
       for(int i=n-2;i>=0;i--)
       vec[i]=max(vec[i],vec[i+1]); //store the unfilled spots comparing with next elements
       
       return vec;
        // Your code here
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
        Solution ob;
        vector <int> res = ob.maxOfMin(a, n);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends