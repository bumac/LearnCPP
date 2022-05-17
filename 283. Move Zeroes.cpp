#include<array>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count_of_zero = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 0){
                nums.erase(nums.begin() + i--);
                ++count_of_zero;
            }
        }
        
        for (int i = 0; i < count_of_zero; ++i){
            nums.push_back(0);
        }
    }
};