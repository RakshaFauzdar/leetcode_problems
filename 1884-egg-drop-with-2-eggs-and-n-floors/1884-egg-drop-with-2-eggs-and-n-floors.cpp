class Solution {
public:
    int twoEggDrop(int n) {
        
        
        int d=1;
        while(n>0)
        {
            n=n-d;
            d++;
        }
        
        return d-1;
    }
};