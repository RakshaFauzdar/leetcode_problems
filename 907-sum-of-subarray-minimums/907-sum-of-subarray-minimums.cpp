class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        // long sum=0;
        int n=arr.size();
        if(n==0)
            return 0;
        long long sum=0;
        long long m=1e9+7;
        stack<pair<int,int>>s,s1;
        int l[n],r[n];
        for(int i=0;i<n;i++)
        {
            int c=1;
            while(s.empty()==false && (s.top().first>arr[i]))
            {
                c+=s.top().second;
                s.pop();
            }
            s.push({arr[i],c});
            l[i]=c;
        }
        for(int i=n-1;i>=0;i--)
        {
            int c=1;
            while(s1.empty()==false && (s1.top().first>=arr[i]))
            {
                c+=s1.top().second;
                s1.pop();
            }
            s1.push({arr[i],c});
            r[i]=c;
        }
        
        for(int i=0;i<n;i++)
        {
            sum+=(arr[i]*(long)l[i]*(long)r[i]);
        }
        return sum%m;        
                   
                   
                   
        
        
    }
};