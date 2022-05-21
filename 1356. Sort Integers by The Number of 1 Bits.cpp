class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {       
        std::sort(arr.begin(), arr.end(), [](int lhs, int rhs){
            int l_count = 0;
            int r_count = 0;
            int a = lhs;
            int b = rhs;
            
            while( lhs )
            {
                l_count += lhs & 1;
                lhs >>= 1;
            }
            
            while( rhs )
            {
                r_count += rhs & 1;
                rhs >>= 1;
            }
            if (l_count == r_count){
                return a < b;
            }
            else return l_count < r_count;
        });
        return arr;
    }
};