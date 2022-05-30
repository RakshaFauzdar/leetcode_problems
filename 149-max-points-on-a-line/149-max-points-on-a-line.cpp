class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        
       int n=points.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            int l=0;
            int over=1;
            int v=1;
            map<double,int>m;
            for(int j=i+1;j<n;j++)
            {
                
                if(points[i][1]==points[j][1] && points[i][0]==points[j][0])
                {
                    over++;
                }
                else if(points[i][0]==points[j][0])
                {
                    v++;
                }
                else
                {
                    
                    double s=double(points[i][1]-points[j][1])/(points[i][0]-points[j][0]);
                    m[s]++;
                    
                    
                    
                }
                
                
                
            }
            for(auto it:m)
            {
                l=max(l,it.second);
            }
            c=max({c,l+over,v});
        }
        return c;
        
       
    }
};