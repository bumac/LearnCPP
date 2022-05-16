class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        auto min_x = coordinates[0][0];
        auto max_x = coordinates[coordinates.size() - 1][0];
        
        auto min_y = coordinates[0][1];
        auto max_y = coordinates[coordinates.size() - 1][1];
        
        double delta_x = max_x - min_x;
        double delta_y = max_y - min_y;
        
        if (delta_x == 0){
            for(int i = 0; i < coordinates.size(); ++i){
                if (min_x != coordinates[i][0]) return false;
            }
            return true;
        }
        
        if (delta_y == 0){
            for(int i = 0; i < coordinates.size(); ++i){
                if (min_y != coordinates[i][1]) return false;
            }
            return true;
        }
        
        for(int i = 0; i < coordinates.size(); ++i){
            auto x = (coordinates[i][0] - min_x) / delta_x;
            auto y = (coordinates[i][1] - min_y) / delta_y;
            if (x != y){
                return false;
            }
        }
        return true;
    }
};