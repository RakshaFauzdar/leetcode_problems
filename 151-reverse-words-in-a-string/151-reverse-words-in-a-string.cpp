class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string s2;
        stack<string>q;
        for(int i=0;i<n;i++)
        {
            string s1;
            if(s[i]==' ')continue;
            while(i<n && s[i]!=' ')
            {
                s1+=s[i];
                i++;
            }
            q.push(s1);
        }
        
        while(!q.empty())
        {
            s2+=q.top();
            q.pop();
            if(!s.empty())
            {
                s2+=" ";
            }
        }
        s2.erase(s2.begin()+s2.size()-1);
        return s2;
        
        
    }
};