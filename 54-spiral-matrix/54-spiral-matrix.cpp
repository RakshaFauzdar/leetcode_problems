class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>v;
        int d=1;
        int left=0,right=m-1;
        int top=0,bottom=n-1;
        while(left<=right && top<=bottom)
        {
            if(d==1)
            {
                for(int i=left;i<=right;i++)
                {
                    v.push_back(matrix[top][i]);
                }
                d=2;
                top++;
            }
            else if(d==2)
            {
                for(int i=top;i<=bottom;i++)
                {
                    v.push_back(matrix[i][right]);
                }
                d=3;
                right--;
            }
            else if(d==3)
            {
                for(int i=right;i>=left;i--)
                {
                    v.push_back(matrix[bottom][i]);
                    
                }
                d=4;
                bottom--;
            }
            else if(d==4)
            {
                for(int i=bottom;i>=top;i--)
                {
                    v.push_back(matrix[i][left]);
                }
                d=1;
                left++;
            }
        }
        return v;
    }
};