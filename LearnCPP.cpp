class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        int currentNumber = low;
        while (currentNumber <= high){
            if (currentNumber++ % 2 != 0){
                ++count;
            }
        }
        return count;
    }
};