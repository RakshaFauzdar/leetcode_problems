class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n=digits.size();
        int c=0;
       if(digits[n-1]<=8)
       {
           digits[n-1]=digits[n-1]+1;
       }
        else
        {
        if(digits[n-1]==9)
        {
            c=1;
            digits[n-1]=0;
        }
        
        for(int i=n-2;i>=0;i--)
        {
           
            
            if(digits[i]==9 && c==1)
            {
                digits[i]=0;
                c=0;
                c=1;
            }
            else if(c==1)
            {
                digits[i]=digits[i]+1;
                c=0;
            }
            
        }
        if(c==1)
        {
            digits.push_back(1);
            reverse(digits.begin(),digits.end());
        }
        }
        return digits;
        
        
           
            
    }
};