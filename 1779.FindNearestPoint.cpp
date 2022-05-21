#include <cmath>
#include <limits>

class Solution {
public:
    bool IsValidPoint(int x, int y, int pX, int pY){
        return (x == pX) || (y == pY);
    }
    
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int smallestDistance = std::numeric_limits<int>::max();
        int smallestIndex = -1;
              
        for (int i = 0; i < points.size(); ++i){
            
            int distance = std::abs(x - points[i][0]) + std::abs(y - points[i][1]);
            
            if (IsValidPoint(x, y, points[i][0], points[i][1])){
                if (smallestDistance > distance){
                    smallestDistance = distance;
                    smallestIndex = i;
                }
                else{
                    if (smallestDistance == distance){
                        smallestIndex = std::min(smallestIndex, i);
                    }
                }
            }
        }
        return smallestIndex;
    }
};