class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        std::sort(arr.begin(), arr.end());
        const int delta = arr[1] - arr[0];
        for(int i = 1; i < arr.size() - 1; ++i){
            if (arr[i + 1] - arr[i] != delta) return false;
        }
        return true;
    }
};