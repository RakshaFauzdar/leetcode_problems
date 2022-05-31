class Solution {
public:
    int visiblePoints(vector<vector<int>>& points, int angle, vector<int>& location) {
        int x=location[0];
        int y=location[1];
        vector<double>v;
        int same=0;
        for(auto p:points)
        {
            int x1=p[0];
            int y1=p[1];
            if(x1==x && y1==y)
            {
                same++;
            }
            else
            {
                double an =get(x1-x,y1-y);
                v.push_back(an);
            }
        }
        sort(v.begin(),v.end());
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            v.push_back(v[i]+360);
        }
        
        int i=0,j=0;
        int m=v.size();
        int mx=0;
        for(int i=0;i<m;i++)
        {
            while(v[i]-v[j]>angle)
            {
                j++;
            }
            mx=max(mx,i-j+1);
        }
         
        return mx+same;
        
    }
    
    double get(int x,int y)
    {
        return atan2(x,y)*180/M_PI;
    }
};