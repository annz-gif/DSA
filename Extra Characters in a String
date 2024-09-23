#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_set<string> dict(dictionary.begin(), dictionary.end()); // Set for O(1) lookup
        int n = s.size();
        vector<int> dp(n + 1, n); // DP array initialized with maximum extra characters
        
        dp[0] = 0; // No extra characters for an empty string
        
        // Iterate through each index in the string
        for (int i = 1; i <= n; i++) {
            // Try all possible substrings ending at i
            for (int j = 0; j < i; j++) {
                string sub = s.substr(j, i - j); // Get the substring s[j:i]
                if (dict.find(sub) != dict.end()) {
                    dp[i] = min(dp[i], dp[j]); // If substring is found in dictionary
                }
            }
            dp[i] = min(dp[i], dp[i - 1] + 1); // Consider the current character as extra
        }
        
        return dp[n]; // Result stored in dp[n]
    }
};
