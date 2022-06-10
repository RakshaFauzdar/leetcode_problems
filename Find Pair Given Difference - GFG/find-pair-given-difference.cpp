// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    unordered_set<int>m;
    
    for(int i=0;i<size;i++)
    {
        if(m.find(n+arr[i])!=m.end())
        {
            return true;
        }
        m.insert(arr[i]);
    }
    m.clear();
    for(int i=size-1;i>=0;i--)
    {
        if(m.find(arr[i]+n)!=m.end())
        {
            return true;
        }
        m.insert(arr[i]);
    }
    return false;
    
    
}