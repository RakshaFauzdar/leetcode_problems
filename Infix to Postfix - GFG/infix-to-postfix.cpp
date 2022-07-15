// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int pre(char s)
    {
        if(s=='^')
        return 3;
        else if(s=='*' || s=='/')
        return 2;
        else if(s=='+' || s=='-')
        return 1;
        else
        return -1;
    }
    string infixToPostfix(string s) {
        stack<char>s1;
        int n=s.length();
        string ans="";
        for(int i=0;i<n;i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                ans+=s[i];
            }
            else if(s[i]=='(')
            {
                s1.push(s[i]);
            }
            else if(s[i]==')')
            {
                while(!s1.empty() && s1.top()!='(')
                {
                    ans+=s1.top();
                    s1.pop();
                }
                if(!s1.empty())
                {
                    s1.pop();
                }
            }
            else
            {
                while(!s1.empty() && pre(s1.top())>=pre(s[i]))
                {
                    ans+=s1.top();
                    s1.pop();
                }
                s1.push(s[i]);
            }
            
        }
        while(!s1.empty())
        {
            ans+=s1.top();
            s1.pop();
        }
        
        return ans;
    }
};


// { Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}
  // } Driver Code Ends