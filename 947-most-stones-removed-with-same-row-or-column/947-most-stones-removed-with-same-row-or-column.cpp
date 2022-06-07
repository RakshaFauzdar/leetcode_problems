class Solution {
public:
    int dfs(vector<vector<int>>& stones, vector<bool>&v,int curr){
       if(v[curr]) return 0;
        int res=1;
        v[curr]=true;
        
        for(int i=0;i<stones.size();i++)
        {
            if(!v[i] && (stones[i][0]==stones[curr][0] || stones[i][1]==stones[curr][1]))
            {
              res+=dfs(stones,v,i);
            }
        }
        
        return res;
    }
    int removeStones(vector<vector<int>>& stones) {
        
        int c=0;
        int n=stones.size();
        vector<bool>v(n,false);
        for(int i=0;i<n;i++)
        {
            if(!v[i])
            {
                c+=dfs(stones,v,i)-1;
            }
        }
        return c;
        
        
    }
};