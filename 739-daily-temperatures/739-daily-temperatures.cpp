class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int>s;
        vector<int>v(n);
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && temperatures[s.top()]<=temperatures[i])
            {
                s.pop();
            }
            if(s.empty()==true)
            {
                v[i]=0;
            }
            else
            {
                v[i]=s.top()-i;
            }
            s.push(i);
        }
        
        return v;
        
    }
};