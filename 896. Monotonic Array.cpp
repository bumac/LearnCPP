class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int val = 0;
        int lastNum = nums[0];
        for(int i = 1; i < nums.size(); ++i){
            if (nums[i] != lastNum){
                if (val == 0){
                    val = nums[i] > lastNum ? 1 : -1;
                }
                else{
                    if (val == 1){
                        if (nums[i] < lastNum) return false;
                    }
                    else{
                        if (nums[i] > lastNum) return false;
                    }
                }
            }
            lastNum = nums[i];
        }
        return true;
    }
};