#pragma once
#include <vector>

class Solution {
public:
    double average(std::vector<int>& salary) {
        
        auto index = 0;
        double result = 0;
        
        int min = salary[0];
        int max = salary[0];
        
        
        while(index < salary.size()){
            const auto val = salary[index];
            
            if (val < min){
                min = val;
            }
            
            if (val > max){
                max = val;
            }
            
            result += val;
            
            index++;
        }
        result = result - min - max;
        result /= (salary.size() - 2);
        return result;
    }
};
