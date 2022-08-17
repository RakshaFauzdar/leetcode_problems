class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int n=words.size();
        vector<string>mp={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        
        
        set<string>s;
        // int n=words.size();
        for(int i=0;i<n;i++)
        {
            string c="";
            string s1=words[i];
            for(int j=0;j<s1.size();j++)
            {
                c+=mp[s1[j]-'a'];
            }
            s.insert(c);
            c.clear();
        }
        return s.size();
        
        
         
        
    }
};