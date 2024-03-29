class NumArray {
public:
    vector<int>v;
    int sum=0;
    NumArray(vector<int>& nums) {
        v=nums;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        
        
    }
    
    void update(int index, int val) {
        sum-=v[index];
        v[index]=val;
        sum+=val;
        
    }
    
    int sumRange(int left, int right) {
        int ans=sum;
        for(int i=0;i<left;i++)
        {
            ans-=v[i];
        }
        
        for(int i=right+1;i<v.size();i++)
        {
            ans-=v[i];
        }
        return ans;
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */