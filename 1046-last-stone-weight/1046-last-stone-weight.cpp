class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int>p(begin(stones),end(stones));
        while(p.size()>1)
        {
            int x=p.top();
            p.pop();
            int y=p.top();
            p.pop();
            p.push(x-y);
        }
        
        
        
        return p.top();
        
        
    }
};