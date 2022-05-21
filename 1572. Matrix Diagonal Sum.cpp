class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int result = 0;
        for (int i = 0, j = 0; i < mat.size(); i++, j++){
            result += mat[i][j] + mat[mat.size() - 1 - i][j];
        }
        return mat.size() % 2 != 0 ? result - mat[mat.size() / 2][mat.size() / 2] : result;
    }
};