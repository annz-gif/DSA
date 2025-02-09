class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        long long totalPairs = (long long)n * (n - 1) / 2;
        unordered_map<int, long long> diffCount;
        for (int i = 0; i < n; i++) {
            int diff = nums[i] - i;
            totalPairs -= diffCount[diff];
            diffCount[diff]++;
        }
        return totalPairs;
    }
};
