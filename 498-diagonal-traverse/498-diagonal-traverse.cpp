class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>v;
        
        
        // if(n==1 || m==1)
        // {
        //     for(int i=0;i<n;i++)
        //     {
        //         for(int j=0;j<m;j++)
        //         {
        //             v.push_back(mat[i][j]);
        //         }
        //     }
        //     // return v;
        // }
        // else
        // {
        v.push_back(mat[0][0]);
        
        
      int flag=1;
        for(int i=1;i<m;i++)
        {
            int j=0;
            int k=i;
            vector<int>v1;
           
            while(j<n && k>=0)
            {
                v1.push_back(mat[j][k]);
                k--;
                j++;
            }
            if(flag%2==1)
            {
                for(int z=0;z<v1.size();z++)
                {
                    v.push_back(v1[z]);
                }
                flag++;
            }
            else
            {
                reverse(v1.begin(),v1.end());
                for(int z=0;z<v1.size();z++)
                {
                    v.push_back(v1[z]);
                }
                flag++;
            }
            
        }
        int p=m-1;
        for(int i=1;i<n;i++)
        {
            int j=p;
            int k=i;
            vector<int>v1;
           
            while(k<n && j>=0)
            {
                v1.push_back(mat[k][j]);
                k++;
                j--;
            }
           if(flag%2==1)
            {
                for(int z=0;z<v1.size();z++)
                {
                    v.push_back(v1[z]);
                }
                flag++;
            }
            else
            {
                reverse(v1.begin(),v1.end());
                for(int z=0;z<v1.size();z++)
                {
                    v.push_back(v1[z]);
                }
                flag++;
            }
            
        }
        // }
        return v;
        
        
        
        
        
    }
};