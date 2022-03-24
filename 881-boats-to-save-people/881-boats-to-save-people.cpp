class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        sort(people.begin(),people.end());
        int sum=0;
        int cnt=0;
        int i=0,j=n-1;
        while(i<=j)
        {
            int d=people[i]+people[j];
            if(d<=limit)
            {
                i++;
            }
            j--;
            cnt++;
           
        }
        return cnt;
        
    }
};