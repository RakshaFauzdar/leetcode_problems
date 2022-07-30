class Solution {
public:
    vector<int> count(string s)
    {
        unordered_map<char,int>m;
        vector<int>v(26);
        for(int i=0;i<s.size();i++)
        {
            v[s[i]-'a']++;
        }
        return v;
    }
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int n=words1.size();
        int m=words2.size();
        // unordered_map<char,int>m;
       
        vector<int>v2(26,0);
        for(int i=0;i<m;i++)
        {
            vector<int>v1=count(words2[i]);
            for(int j=0;j<26;j++)
            {
                v2[j]=max(v1[j],v2[j]);
            }
            
        }
        vector<string>s;
        for(int i=0;i<n;i++)
        {
            vector<int>v=count(words1[i]);
            bool flag=true;
            for(int j=0;j<26;j++)
            {
                if(v[j]>=v2[j])
                {
                    continue;
                }
                else
                {
                    flag=false;
                    break;
                }
            }
            if(flag==true)
            {
                s.push_back(words1[i]);
            }
        }
        return s;
       
    }
};