class Solution {
public:
    bool isHappy(int n) {
        std::array<bool, 812> results;
        results.fill(false);
        
        while(n != 1){
            
            int newN = 0;
            while (n > 0){
                int val = n % 10;
                n /= 10;
                newN += val * val;
            }
            
            n = newN;
            
            if (results[n]){
                return false;
            }          
            
            results[n] = true;
        }
        return true;
    }
};