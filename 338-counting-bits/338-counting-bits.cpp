class Solution {
public:
    int dec(int N)
{
 
    // To store the binary number
    unsigned long long  B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        unsigned long long c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
 
        // Count used to store exponent value
        cnt++;
    }
 
    return B_Number;
}
int co( int n)
{
     int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
 
    vector<int> countBits(int n) {
        int a[n+1];
        for(int i=0;i<n+1;i++)
        {
            a[i]=i;
        }
        vector<int>v;
        for(int i=0;i<n+1;i++)
        {
           int c=co(a[i]);
            v.push_back(c);
            
        }
        return v;
        
    }
};