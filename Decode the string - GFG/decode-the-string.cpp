//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=']')
            {
                st.push(s[i]);
            }
            else
            {
                string curr_str="";
                while(st.top()!='[')
                {
                    curr_str=st.top()+curr_str;
                    st.pop();
                }
                
                st.pop();
                
                string number="";
                while(!st.empty() && isdigit(st.top()))
                {
                    number=st.top()+number;
                    st.pop();
                }
                
                int k_times=stoi(number);
                
                while(k_times--)
                {
                for(int j=0;j<curr_str.size();j++)
                {
                    st.push(curr_str[j]);
                   
                }
                }
            }
        }
        
        string ans="";
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends