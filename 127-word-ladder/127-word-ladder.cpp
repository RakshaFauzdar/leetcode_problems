class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n=wordList.size();
       
        unordered_set<string>s(wordList.begin(),wordList.end());
        bool is=false;
        for(auto it:wordList)
        {
            if(endWord==it)
            {
                is=true;
            }
        }
        if(is==false)
        {
            return 0;
        }
        
        
        queue<string>q;
        q.push(beginWord);
        int l=1;
        while(!q.empty())
        {
            l++;
            int si=q.size();
            while(si--)
            {
                string c=q.front();
                q.pop();
                for(int i=0;i<c.size();i++)
                {
                    string t=c;
                    for(char j='a';j<='z';j++)
                    {
                        t[i]=j;
                        if(t==c)
                        {
                            continue;
                        }
                        if(t==endWord)
                        {
                            return l;
                        }
                        if(s.count(t)!=0)
                        {
                            q.push(t);
                            s.erase(t);
                        }
                    }
                }
            }
        }
        return 0;
    }
};