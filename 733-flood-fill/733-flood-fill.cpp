class Solution {
public:
    void dfs(vector<vector<int>>&a,int n,int m,int i,int j,int p,int c)
    {
        if(i<0 || i>=n || j<0 || j>=m)
            return;
        if(a[i][j]==c)
            return;
        if(a[i][j]!=p)
            return;
        
        a[i][j]=c;
        dfs(a,n,m,i+1,j,p,c);
        dfs(a,n,m,i-1,j,p,c);
        dfs(a,n,m,i,j+1,p,c);
        dfs(a,n,m,i,j-1,p,c);
    }
    void df2(vector<vector<int>>&v,int i,int j,int c)
    {
        int x=v[i][j];
        if(x==c)return;
        dfs(v,v.size(),v[0].size(),i,j,x,c);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=image.size();
        int m=image[0].size();
       
        df2(image,sr,sc,newColor);
        return image;
        
    }
};