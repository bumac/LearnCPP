#include <vector>

class AvarageSalary {
public:
    double average(const std::vector<int>& salary) {
        double result = 0;
        
        int min = salary[0];
        int max = salary[0];
        
        for (auto val : salary){
            min = std::min(val, min);
            max = std::max(val, max);
            
            result += val;
        }
        
        result = result - min - max;
        result /= (salary.size() - 2);
        return result;
    }
};
