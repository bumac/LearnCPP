class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        std::unordered_set<int> set;
        set.reserve(arr.size() * 2);
        auto [min, max] = std::minmax_element(arr.begin(), arr.end());
        if (*min == *max) return true;

        for(int i = 0; i < arr.size(); i++){
            if (set.count(arr[i])){
                return false;
            }
            set.insert(arr[i]);
        }
        
        const int delta = (*max - *min) / (arr.size() - 1);
        int current = *min;
        for(int i = 0; i < arr.size(); ++i){
            if (!set.count(current)) {
                return false;                
            }
            current += delta;
        }
        return true;
    }
};