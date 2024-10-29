class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        // Get dimensions of the grid
        int m = grid.size();    // number of rows
        int n = grid[0].size(); // number of columns
        
        // res will store the rightmost column we can reach
        int res = 0;
        
        // dp array stores the maximum number of moves possible to reach each cell
        // in the current column we're processing
        vector<int> dp(m);
        
        // Iterate through each column from left to right (starting from column 1)
        for (int j = 1; j < n; ++j) {
            // leftTop keeps track of the dp value from the cell above-left
            int leftTop = 0;
            // found indicates if we can reach any cell in current column
            bool found = false;
            
            // Iterate through each row in current column
            for (int i = 0; i < m; ++i) {
                // cur will store the maximum moves to reach current cell
                int cur = -1;
                // Store dp[i] for next iteration's leftTop
                int nxtLeftTop = dp[i];
                
                // Check move from top-left cell (if valid)
                if (i - 1 >= 0 && leftTop != -1 && grid[i][j] > grid[i - 1][j - 1]) {
                    cur = max(cur, leftTop + 1);
                }
                
                // Check move from direct left cell (if valid)
                if (dp[i] != -1 && grid[i][j] > grid[i][j - 1]) {
                    cur = max(cur, dp[i] + 1);
                }
                
                // Check move from bottom-left cell (if valid)
                if (i + 1 < m && dp[i + 1] != -1 && grid[i][j] > grid[i + 1][j - 1]) {
                    cur = max(cur, dp[i + 1] + 1);
                }
                
                // Update dp array for current cell
                dp[i] = cur;
                // Update found flag if we can reach current cell
                found = found || (dp[i] != -1);
                // Update leftTop for next row's iteration
                leftTop = nxtLeftTop;
            }
            
            // If we can't reach any cell in current column, break
            if (!found) break;
            // Update result to current column if we can reach it
            res = j;
        }
        
        // Return the maximum number of moves possible
        return res;
    }
};
