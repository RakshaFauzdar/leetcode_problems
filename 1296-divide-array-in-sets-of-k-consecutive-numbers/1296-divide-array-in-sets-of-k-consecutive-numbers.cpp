class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        // int n=nums.size();
        // if(n%k!=0)
        // {
        //     return false;
        // }
        map<int,int>m;
        for(int i:nums)
        {
            ++m[i];
        }
        for(auto it :m)
        {
            int a=it.first;
            int b=it.second;
            if(b>0)
            {
                for(int i=1;i<k;i++)
                {
                    if(!m.count(a+i))
                    {
                        return false;
                    }
                    m[a+i]-=b;
                    
                    if(m[a+i]<0)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};