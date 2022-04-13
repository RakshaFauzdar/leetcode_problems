class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));
        int d=1,r=1;
        int left=0,right=n-1;
        int top=0,bottom=n-1;
        while(left<=right && top<=bottom)
        {
            if(d==1)
            {
                for(int i=left;i<=right;i++)
                {
                    v[top][i]=r++;
                }
                d=2;
                top++;
            }
            else if(d==2)
            {
                for(int i=top;i<=bottom;i++)
                {
                    v[i][right]=r++;
                }
                d=3;
                right--;
            }
            else if(d==3)
            {
                for(int i=right;i>=left;i--)
                {
                    v[bottom][i]=r++;
                }
                d=4;
                bottom--;
            }
            else if(d==4)
            {
                for(int i=bottom;i>=top;i--)
                {
                    v[i][left]=r++;
                }
                d=1;
                left++;
            }
                    
        }
        return v;
        
    }
};