class Solution {
public:
    int minDeletions(string s) {
        int n=s.length();
       vector<int>f(26,0);
        for(int i=0;i<n;i++)
        {
            f[s[i]-'a']++;
        }
        priority_queue<int>pq;
        for(int i=0;i<26;i++)
        {
            if(f[i]>0)
                pq.push(f[i]);
        }
        int c=0;
        while(pq.size()>1)
        {
            int x=pq.top();
            pq.pop();
            if(x==pq.top())
            {
                if(x-1>0)
                {
                    pq.push(x-1);
                }
                c++;
            }
        }
        return c;
       
        
        
        
    }
};