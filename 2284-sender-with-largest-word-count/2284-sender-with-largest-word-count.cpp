class Solution {
public:
    int count(string s)
    {
        int n=s.length();
        int c=1;
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                c++;
            }
        }
        return c;
    }
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
      map<string,int> m;
        int n = senders.size();
        for(int i=0;i<n;i++){
            
            m[senders[i]] += count(messages[i]);
        }
        string res="";
        int ma = 0;
        
        
        for(auto it:m)
        {
            int x=it.second;
            string y=it.first;
            if(x>=ma)
            {
                ma=max(ma,x);
                res=max(res,y);
            }
        }
        
        return res;
        
        
        
    }
};