class Solution {
public:
  
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int n=words.size();
        int m1=s.size();
        int c=0;
         unordered_map<char,vector<int>>m;
//         this is for storing all indexes of particular char;
        for(int i=0;i<m1;i++)
        {
            m[s[i]].push_back(i);
        }
        
        for(int i=0;i<n;i++)
        {
            string s1=words[i];
            int prev=-1;
            bool found=true;
            for(int j=0;j<s1.size() && found;j++)
            {
                auto &ans=m[s1[j]];
                auto it=upper_bound(begin(ans),end(ans),prev);
                
                if(it==end(ans))
                {
                    found=false;
                }
                else
                {
                    prev=*it;
                }
                
            }
            c+=found;
        }
        return c;
        
    }
};