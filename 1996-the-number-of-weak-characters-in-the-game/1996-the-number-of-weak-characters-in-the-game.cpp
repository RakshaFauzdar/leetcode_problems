class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b)
     {
          if (a[0] == b[0])
          {
               return a[1] > b[1];
          }
          return a[0] < b[0];
     }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int n=properties.size();
        int cnt=0;
        sort(properties.begin(),properties.end(),comp);
        // int x=properties[0][0];
        // int y=properties[0][n-1];
        int ans=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(properties[i][1]<ans)
            {
                cnt++;
            }
            ans=max(ans,properties[i][1]);
        }
        return cnt;
        
    }
};