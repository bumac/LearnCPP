class Solution {
public:
    int hammingWeight(uint32_t n) {
        int countOfOne = 0;
        
        for(int i = 0; i < 32; ++i){
            if (n % 2 == 1) ++countOfOne;
            n = n >> 1;
        }
        return countOfOne;
    }
};