class Solution {
public:
  
  
  int solve(vector<int>&v,int x)
  {
      int n=v.size();
    unordered_map<int,int>m;
    int sum=0;
      // int c=0;
    // for(int i=0;i<n;i++)
    // {
    //   m[v[i]]++;
    // }
      int c=0;
      m[0]=1;
      for(int i=0;i<n;i++)
      {
          sum+=v[i];
          if(m.find(sum-x)!=m.end())
       
          {
              c+=m[sum-x];
          }
          m[sum]++;
      }
      return c;
      
      
  }
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        
        int cnt=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            vector<int>v(m);
            for(int j=i;j<n;j++)
            {
                for(int k=0;k<m;k++)
                {
                    v[k]+=matrix[j][k];
                }
                cnt+=solve(v,target);
            }
        }
        return cnt;
        
    }
};