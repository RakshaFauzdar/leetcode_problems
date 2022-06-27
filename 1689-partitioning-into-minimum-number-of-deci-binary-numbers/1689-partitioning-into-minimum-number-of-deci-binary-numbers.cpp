class Solution {
public:
    int minPartitions(string n) {
        int m=n.size();
        char x=n[0];
        for(int i=1;i<m;i++)
        {
            if(n[i]>x)
            {
                x=n[i];
            }
        }
       int d=x-'0';
        return d;
        
    }
};