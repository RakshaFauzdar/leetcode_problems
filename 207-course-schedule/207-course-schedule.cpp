class Solution {
public:
    bool is(vector<int>adj[],vector<int>&v,int i)
    {
        if(v[i]==1)
        {
            return true;
        }
        if(v[i]==0)
        {
            v[i]=1;
            for(auto it:adj[i])
            {
                if(is(adj,v,it))
                   {
                       return true;
                   }
            }
        }
                   v[i]=2;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>v(numCourses,0);
        vector<int>adj[numCourses];
        for(auto it :prerequisites)
        {
            adj[it[1]].push_back(it[0]);
        }
        for(int i=0;i<numCourses;i++)
        {
            if(is(adj,v,i))
                return false;
        }
        return true;
        
    }
};