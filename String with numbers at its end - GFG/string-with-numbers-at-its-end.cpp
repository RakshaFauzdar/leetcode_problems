// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
		
	int isSame(string s)
	{
	    int n=s.length();
	    int c=0;
	    int num=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]>='a' && s[i]<='z')
	        {
	            c++;
	        }
	        else
	        {
	            num=num*10+(s[i]-'0');
	        }
	    }
	    if(c==num)
	    return 1;
	    else
	    return 0;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isSame(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends