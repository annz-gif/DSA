class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        vector<int> row_minimums(rows, INT_MAX);
        vector<int> col_maximums(cols, 0);
        
        for (int row_ind = 0; row_ind < rows; ++row_ind) {
            for (int col_ind = 0; col_ind < cols; ++col_ind) {
                int el = matrix[row_ind][col_ind];
                row_minimums[row_ind] = min(row_minimums[row_ind], el);
                col_maximums[col_ind] = max(col_maximums[col_ind], el);
            }
        }
        
        for (int row_ind = 0; row_ind < rows; ++row_ind) {
            for (int col_ind = 0; col_ind < cols; ++col_ind) {
                int el = matrix[row_ind][col_ind];
                if (el == row_minimums[row_ind] && el == col_maximums[col_ind]) {
                    return {el};
                }
            }
        }
        
        return {};
    }
};
