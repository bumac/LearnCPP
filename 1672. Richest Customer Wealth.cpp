class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = std::numeric_limits<int>::min();
        
        for(int i = 0; i < accounts.size(); i++){
            int wealth = 0;
            for (int j = 0; j < accounts[i].size(); j++){
                wealth += accounts[i][j];
            }
            max = std::max(max, wealth);                
        }
        
        return max;
    }
};