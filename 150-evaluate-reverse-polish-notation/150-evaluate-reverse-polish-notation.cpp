class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int>s;
        for(auto s1:tokens)
        {
            if(isdigit(s1[0]) ||s1.size()>1)
            {
                s.push(stoi(s1));
            }
            else
            {
                auto x=s.top();
                s.pop();
                auto y=s.top();
                s.pop();
                switch(s1[0])
                {
                    case '+':
                        y+=x;
                        break;
                    case '-':
                        y-=x;
                        break;
                    case '*':
                        y*=x;
                        break;
                    case '/':
                        y/=x;
                        break;
                        
                }
                s.push(y);
            }
        }
        return s.top();
        
    }
};