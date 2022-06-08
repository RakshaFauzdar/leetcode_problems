class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.length();
        string s1="";
        stack<pair<char,int>>q;
        for(int i=0;i<n;i++)
        {
            if(q.empty()==true)
            {
                q.push({s[i],1});
            }
            else
            {
                if(s[i]==q.top().first)
                {
                    q.push({s[i],q.top().second+1});
                    if(q.top().second==k)
                    {
                        int x=k;
                        while(x>0)
                        {
                            q.pop();
                            x--;
                        }
                    }
                }
                else
                {
                    q.push({s[i],1});
                }
                    
                    
            }
        }
        while(q.empty()==false)
        {
            s1+=q.top().first;
            q.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;
        
        
    }
};