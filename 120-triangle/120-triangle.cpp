class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int m=triangle[0].size();
       // vector<int>mi=triangle[n-1];
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<triangle[i].size();j++)
            {
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
        
    }
};