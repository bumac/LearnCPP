class NumArray {
private:
    vector<int> sums;
public:
    NumArray(vector<int>& nums) : sums(nums.size() + 1) {
        int sum = 0;
        sums[0] = 0;
        for(int i = 0; i < nums.size(); ++i){
            sum += nums[i];
            sums[i + 1] = sum;
        }
    }
    
    int sumRange(int left, int right) {
        return sums[right + 1] - sums[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */