class Solution {
public:
    string simplifyPath(string path) {
        int n=path.size();
        stack<string>q;
        for(int i=0;i<n;i++)
        {
            if(path[i]=='/')
            {
                continue;
            }
            string s1;
            while(i<n && path[i]!='/')
            {
                s1+=path[i];
                i++;
            }
            if(s1==".")
            {
                continue;
            }
            else if(s1=="..")
            {
                if(!q.empty())
                {
                    q.pop();
                }
            }
            else
            {
                q.push(s1);
            }

        }
        string s;
        while(!q.empty())
        {
            s="/"+q.top()+s;
            q.pop();
        }
        if(s.size()==0){
            return "/";
        }
        return s;
        
    }
};