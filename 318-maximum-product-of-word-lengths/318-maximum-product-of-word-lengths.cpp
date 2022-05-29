class Solution {
public:
    int cou(int n)
{
     
    // Stores the count
    // of set bits in n
    int count = 0;
 
    while (n > 0)
    {
        count += n & 1;
        n >>= 1;
    }
 
    // Return the count
    return count;
}
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<words[i].length();j++)
            {
                v[i]=v[i]| 1<<(words[i][j]-'a');
            }
        }
        
        
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((v[i]&v[j])==0)
                {
                    int l=words[i].length();
                    int r=words[j].length();
                    res=max(res,l*r);
                }
            }
        }
        
        return res;
        
    }
};