// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        int n=S.length();
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            if(S[i]>='0' && S[i]<='9')
            {
                s.push(S[i]-'0');
            }
            else
            {
                int y=s.top();
                s.pop();
                int x=s.top();
                s.pop();
                
                switch(S[i])
                {
                    case '+':
                    {
                        s.push(x+y);
                        break;
                    }
                    case '-':
                    {
                        s.push(x-y);
                        break;
                    }
                    case '*':
                    {
                        s.push(x*y);
                        break;
                    }
                    case '/':
                    {
                        s.push(x/y);
                        break;
                    }
                }
            }
        }
        return s.top();
        
        // Your code here
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends