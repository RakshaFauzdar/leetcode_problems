class Solution {
public:
    int visiblePoints(vector<vector<int>>& points, int angle, vector<int>& location) {
        int x=location[0];
        int y=location[1];
        int over_lap=0;
        int answer=0;
        vector<double>v;
        for(auto p:points)
        {
            int x1=p[0];
            int y1=p[1];
            if(x==x1 && y==y1)
            {
                over_lap++;
            }
            else
            {
                int x2=x1-x;
                int y2=y1-y;
                double get=atan2(x2,y2)*180/M_PI;
               
                v.push_back(get);
            }
        }
        
        
        sort(v.begin(),v.end());
        int p=v.size();
        for(int i=0;i<p;i++)
        {
            v.push_back(v[i]+360);
        }
        int m=v.size();
        int j=0;
        for(int i=0;i<m;i++)
        {
            if(v[i]-v[j]>angle)
            {
                j++;
            }
            answer=max(answer,i-j+1);
        }
        
        return answer+over_lap;
        
    }
};