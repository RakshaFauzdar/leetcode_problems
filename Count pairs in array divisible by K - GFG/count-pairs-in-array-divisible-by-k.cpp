// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long countKdivPairs(int A[], int n, int K)
    {
        long long c=0;
         unordered_map<int,int>m;
        // for(int i=0;i<n;i++)
        // {
        //     m[A[i]%K]++;
        // }
        for(int i=0;i<n;i++)
        {
            int x=A[i]%K;
            if(x!=0 && m.find(K-x)!=m.end() )
            {
                c+=m[K-x];
            }
            else if(x==0)
            {
                if(m.find(0)!=m.end())
                {
                    c+=m[0];
                }
            }
            m[A[i]%K]++;
        }
        return c;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends