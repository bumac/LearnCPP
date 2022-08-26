class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> set;
        
        for(int i = 0; i < nums.size(); ++i){
            if (set.count(nums[i])){
                return true;
            }
            else{
                set.insert(nums[i]);
            }
        }
        return false;
    }
};