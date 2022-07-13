// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
     bool isstepping(int n)
     {
        int prev=-1;
        while(n)
        {
            int curr=n%10;
            if(prev==-1)
            {
                prev=curr;
            }
            else
            {
                if(abs(curr-prev)!=1)
                {
                    return false;
                }
            }
            prev=curr;
            n/=10;
        }
        return true;
     }
    int steppingNumbers(int n, int m)
    {
        int cnt=0;
        for(int i=n;i<=m;i++)
        {
            if(isstepping(i))
            {
                cnt++;
            }
        }
        return cnt;
    }
};


// { Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}

  // } Driver Code Ends