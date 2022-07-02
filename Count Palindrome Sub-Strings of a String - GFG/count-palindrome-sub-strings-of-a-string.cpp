// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}

// } Driver Code Ends


int CountPS(char S[], int N)
{
    int cnt=0;
    for(int i=1;i<N;i++)
    {
        int x=i;
        int y=i-1;
        while(y>=0 && x<N && S[x]==S[y])
        {
            cnt++;
            y--;
            x++;
        }
    }
        for(int i=1;i<N-1;i++)
        {
            int x=i-1;
            int y=i+1;
            while(x>=0 && y<N && S[x]==S[y])
            {
                cnt++;
                x--;
                y++;
            }
        }
        return cnt;
    
    
    
}