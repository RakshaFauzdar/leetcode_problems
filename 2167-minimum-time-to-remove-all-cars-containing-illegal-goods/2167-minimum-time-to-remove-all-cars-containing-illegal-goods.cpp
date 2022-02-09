class Solution {
public:
    int minimumTime(string s) {
        int n=s.size();
        vector<int>a(n),b(n);
        if(s[0]=='0')
        {
            a[0]=0;
        }
        else
        {
            a[0]=1;
        }
        for(int i=1;i<n;i++)
        {
            if(s[i]=='0')
            {
                a[i]=a[i-1];
            }
            else
            {
                a[i]=min(i+1,a[i-1]+2);
                
            }
        }
        if(s[n-1]=='0')
        {
            b[n-1]=0;
        }
        else
        {
            b[n-1]=1;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(s[i]=='0')
            {
                b[i]=b[i+1];
            }
            else
            {
                b[i]=min(n-i,b[i+1]+2);
            }
        }
        int sol=min(b[0],a[n-1]);
        for(int i=0;i<n-1;i++)
        {
            sol=min(sol,a[i]+b[i+1]);
        }
        
        return sol;
        
    }
};