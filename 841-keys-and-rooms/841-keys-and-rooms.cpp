class Solution {
public:
    
    
    void dfs(vector<vector<int>>&room,vector<bool>&v,int s)
    {
        v[s]=true;
        for(int i:room[s])
        {
            if(!v[i])
            {
                dfs(room,v,i);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       
        int n=rooms.size();
        vector<bool>v(n,0);
        
        
        dfs(rooms,v,0);
        for(bool i:v)
        {
            if(!i)
            {
                return false;
            }
        }
        return true;
        
        
    }
};