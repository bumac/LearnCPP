class Solution {
public:
    int countOdds(int low, int high) {
        const int delta = high - low + 1;
        if (delta % 2 == 0){
            return (delta) / 2;
        }
        else{
            return low % 2 == 0 ? (delta - 1) / 2 : delta / 2 + 1;
        }
    }
};
