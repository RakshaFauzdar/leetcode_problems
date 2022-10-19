class cmp{
    public:
    bool operator()(pair<int,string> a, pair<int,string> b) const{
        if(a.first < b.first) return true;
        else if(a.first == b.first && a.second>b.second) return true;
        return false;
    }
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n=words.size();
        vector<string>v;
        
        map<string,int>m;
        for(int i=0;i<n;i++)
        {
            m[words[i]]++;
        }
        priority_queue<pair<int,string>,vector<pair<int, string>>, cmp> p;
        for(auto it:m)
        {
            p.push(make_pair(it.second,it.first));
            
        }
        for(int i=0;i<k;i++)
        {
            v.push_back(p.top().second);
            p.pop();
        }
        
        return v;
        
    }
   
};