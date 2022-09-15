class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        int n=changed.size();
        unordered_map<int,int>mp;
        for(auto it:changed)
        {
            mp[it]++;
        }
        vector<int>v;
        vector<int>v1;
        sort(changed.begin(),changed.end());
        for(int i=0;i<n;i++)
        {
            
            if(mp[changed[i]]==0)
            {
                continue;
            }
            if(mp[changed[i]*2]!=0)
            {
                v.push_back(changed[i]);
                mp[changed[i]]--;
                mp[changed[i]*2]--;
            }
            else
            {
                return {};
            }
        }
        int z=n/2;
        if( n%2!=0)
        {
            return {};
        }
        else
        {
            return v;
        }
        
    }
};