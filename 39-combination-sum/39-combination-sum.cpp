class Solution {
public:
    vector<int>v;
    vector<vector<int>>ans;
    int sum=0;
    void fnc(vector<int>&c,int target,int id)
    {
        if(sum>target)return;
        if(sum==target)
        { 
            ans.push_back(v);
            
        }
        for(int i=id;i<c.size();i++)
        {
            sum+=c[i];
            v.push_back(c[i]);
            fnc(c,target,i);
            sum-=c[i];
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sum=0;
        fnc(candidates,target,0);
        return ans;
        
    }
};