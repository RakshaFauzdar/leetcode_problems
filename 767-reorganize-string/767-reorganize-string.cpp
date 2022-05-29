class Solution {
public:
    string reorganizeString(string s) {
        int n=s.length();
        unordered_map<char,int>m;
        priority_queue<pair<int,char>>pq;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        for(auto it:m)
        {
            pq.push(make_pair(it.second,it.first));
        }
        
        string s1="";
        while(pq.size()>1)
        {
            auto t1=pq.top();
            pq.pop();
            
            auto t2=pq.top();
            pq.pop();
            
            
            s1+=t1.second;
            s1+=t2.second;
            
            
            t1.first--;
            t2.first--;
            
            
            if(t1.first>0)
            {
                pq.push(t1);
            }
            if(t2.first>0)
            {
                pq.push(t2);
            }
            
            
            
            
            
        }
        
        if(pq.empty()==false)
        {
            if(pq.top().first>1)
            {
                return "";
            }
            else
            {
                s1+=pq.top().second;
            }
        }
        
        return s1;
        
        
    }
};