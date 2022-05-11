class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while (n >= 1){
            const int lastNumber = n % 10;
            product *= lastNumber;
            sum += lastNumber;
            n /= 10;
        }
        
        return product - sum;
    }
};