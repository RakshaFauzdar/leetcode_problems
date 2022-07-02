// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        int m=s.length();
        int n=p.length();
        int c=0;
        int j=0;
       vector<int>m1(26,0),m2(26,0);
        for(int i=0;i<n;i++)
        {
            m1[p[i]-'a']++;
        }
        int ans=0;
        int sol=-1;
        int mx=INT_MAX;
        for(int i=0;i<m;i++)
        {
            m2[s[i]-'a']++;
            if(m2[s[i]-'a']<=m1[s[i]-'a'] && m1[s[i]-'a']!=0)
            {
                c++;
            }
            if(c==n)
            {
                while(m2[s[j]-'a']>m1[s[j]-'a'] || m1[s[j]-'a']==0)
                {
                    m2[s[j]-'a']--;
                    j++;
                    
                }
                ans=i-j+1;
                if(ans<mx)
                {
                    sol=j;
                    mx=ans;
                }
                
            }
            
            
            
            
        }
      if(sol==-1)
      return "-1";
      else
      return s.substr(sol,mx);
        // Your code here
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends