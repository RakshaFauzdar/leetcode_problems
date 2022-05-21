class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n=arr.size();
        string s;
       vector<string>v;
       map<string,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m[arr[i]]==1 && k>0)
            {
                 k--;
                if(k==0)
                {
                    return arr[i];
                }
            }
        }
        return "";
    }
};