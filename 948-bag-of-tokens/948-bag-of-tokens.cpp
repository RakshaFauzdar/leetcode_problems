class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        int score=0;
        sort(tokens.begin(),tokens.end());
        int k=power;
        int n=tokens.size();
        int ans=0;
        int i=0,j=n-1;
        while(i<=j)
        {
            if(tokens[i]<=k)
            {
                k-=tokens[i];
                score++;
                i++;
            }
            else if(score>=1)
            {
                k+=tokens[j];
                j--;
                score--;
            }
            else
            {
                break;
            }
            ans=max(ans,score);
        }
        
        return ans;
        
    }
};