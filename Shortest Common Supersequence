class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        // Step 1: Find the longest common subsequence using dynamic programming
        int m = str1.length();
        int n = str2.length();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        
        // Fill the dp table
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (str1[i - 1] == str2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        
        // Step 2: Construct the shortest common supersequence
        // Start from the bottom right of the dp table
        int i = m, j = n;
        string result = "";
        
        while (i > 0 && j > 0) {
            if (str1[i - 1] == str2[j - 1]) {
                // If the characters are the same, add it once
                result.push_back(str1[i - 1]);
                i--;
                j--;
            } else if (dp[i - 1][j] > dp[i][j - 1]) {
                // If coming from top has higher value, take character from str1
                result.push_back(str1[i - 1]);
                i--;
            } else {
                // Otherwise, take character from str2
                result.push_back(str2[j - 1]);
                j--;
            }
        }
        
        // Add remaining characters from str1 (if any)
        while (i > 0) {
            result.push_back(str1[i - 1]);
            i--;
        }
        
        // Add remaining characters from str2 (if any)
        while (j > 0) {
            result.push_back(str2[j - 1]);
            j--;
        }
        
        // Reverse the result to get the final supersequence
        reverse(result.begin(), result.end());
        
        return result;
    }
};
