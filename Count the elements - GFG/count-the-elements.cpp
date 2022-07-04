// { Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;
vector<long long> find(vector<long long> a,vector<long long> b,vector<long long> q);

int main() {
    
    int t;

    cin >> t;

    while(t--){
       
       int n;
       cin >> n;
       vector<long long> a;
       vector<long long> b;
       vector<long long> ans;
       int input;
       for(int i =0;i<n;i++){
           cin>> input;
           a.push_back(input);
          }
       for(int i =0;i<n;i++){
           cin >> input;
           b.push_back(input);
       }
       int qsz;
       cin >> qsz;
       vector<long long> q;    
       for(int i =0;i<qsz;i++)
        {
           cin >> input;
           q.push_back(input);
        }
        ans= find(a,b,q);
        for(int i =0;i<qsz;i++){
            cout<< ans[i] << endl;
      }
    }
    return 0;
}// } Driver Code Ends


//User function Template for C++

vector<long long> find(vector<long long> a,vector<long long> b,vector<long long> q) {
    int n=a.size();
    int m=b.size();
    vector<long long>v;
    int d=q.size();
    for(int i=0;i<d;i++)
    {
        int x=a[q[i]];
        int c=0;
        for(int j=0;j<m;j++)
        {
            if(b[j]<=x)
            {
                c++;
            }
        }
        v.push_back(c);
    }
    return v;

}
