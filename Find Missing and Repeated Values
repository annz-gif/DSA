class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int size = n * n;
        vector<int> count(size + 1, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                count[grid[i][j]]++;
            }
        }

        int a = -1, b = -1;

        for (int num = 1; num <= size; num++) {
            if (count[num] == 2) {
                a = num;
            } else if (count[num] == 0) {
                b = num;
            }
        }

        return {a, b};
    }
};
