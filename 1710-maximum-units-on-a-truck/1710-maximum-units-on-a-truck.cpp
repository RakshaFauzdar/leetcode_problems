class Solution {
public:
    bool static cmp(vector<int>&a,vector<int>&b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n=boxTypes.size();
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            int x=boxTypes[i][0];
            int y=boxTypes[i][1];
            int z=min(x,truckSize);
            ans+=(z*y);
            truckSize-=x;
            if(truckSize<0)
            {
                break;
            }
        }
        return ans;
        
    }
};