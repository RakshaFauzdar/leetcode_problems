class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int cnt=0;
        while(startValue<target)
        {
            cnt++;
            if(target%2==0)
            {
               target/=2;
            }
            else
            {
                target++;
            }
        }
        
        return cnt+startValue-target;
        
    }
};