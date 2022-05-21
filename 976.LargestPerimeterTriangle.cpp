class Solution {
public:
    int largestPerimeter(std::vector<int>& nums) {
        std::sort(nums.begin() , nums.end(), [](const int a, const int b) {return a > b; });        
        
        for(int i = 0; i < nums.size() - 2 ; i++){
            int sum = nums[i] + nums[i + 1] + nums[i + 2];
            if(sum - nums[i] > nums[i]) return sum;
        }
        return 0;
    }
};