// { Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
long long m=1e9+7;
    long long int power(long long int a, long long int b) { 
       long long int res=1;
    //   a=a%m;
       while(b>0)
       {
           if(b&1)
           {
               res=(res*a)%(1000000007);
           }
           
        
          
           a=(a*a)%(1000000007);
           b=b>>1;
       }
       return res;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.power(a, b) << endl;
    
    }
    return 0; 
} 


  // } Driver Code Ends