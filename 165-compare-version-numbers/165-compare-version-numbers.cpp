class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n=version1.size();
        int m=version2.size();
        int i=0,j=0;
        int v1=0,v2=0,curr_score=0;
        while(i<n || j<m)
        {
            curr_score=0;
            while(i<n && version1[i]!='.')
            {
                curr_score=curr_score*10+(version1[i]-'0');
                i++; 
            }
            v1+=curr_score;
            curr_score=0;
            while(j<m && version2[j]!='.')
            {
                curr_score=curr_score*10+(version2[j]-'0');
                j++;
            }
            v2+=curr_score;
            
            if(v1<v2)
            {
                return -1;
            }
            else if(v1>v2)
            {
                return 1;
            }
            
            i++;
            j++;
            
        }
        return 0;
        
    }
};