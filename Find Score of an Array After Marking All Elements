class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score = 0; // Change to long long to avoid overflow
        int n = nums.size();
        deque<int> q;

        // Traverse through the array
        for (int i = 0; i < n; i++) {
            // If queue is not empty and the current number is greater than or equal to the last in queue
            if (!q.empty() && nums[i] >= q.back()) {
                bool skip = false;
                // Process the elements in the queue
                while (!q.empty()) {
                    int add = q.back();
                    q.pop_back();
                    if (!skip) {
                        score += add;
                    }
                    skip = !skip;
                }
                continue;
            }

            // Add current element to the queue
            q.push_back(nums[i]);
        }

        // Final processing of remaining elements in the queue
        bool skip = false;
        while (!q.empty()) {
            int add = q.back();
            q.pop_back();
            if (!skip) {
                score += add;
            }
            skip = !skip;
        }

        return score;
    }
};
