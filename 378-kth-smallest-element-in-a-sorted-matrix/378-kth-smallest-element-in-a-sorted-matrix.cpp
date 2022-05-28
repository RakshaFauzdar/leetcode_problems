class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>pq;
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                pq.push(matrix[i][j]);
            }
        }
        int s=pq.size();
        int k1=s-k+1;
        int ans=0;
        while(pq.size()>0 && k1>0)
        {
            int x=pq.top();
            pq.pop();
            ans=x;
            k1--;
        }
        return ans;
        
    }
};