class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>m;
        priority_queue<int>q;
        int sum=0,c=0;
        int m1=n/2;
        for(auto it:arr)
        {
            m[it]++;
        }
        
        
        for(auto it:m)
        {
            q.push(it.second);
        }
        
        
        
        while(sum<m1)
        {
            sum+=q.top();
            q.pop();
            
            
            c++;
        }
        
        
        return c;
    }
};