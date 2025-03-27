#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int, int> freq;
        int dom = 0, count = 0, n = nums.size();

        for (int num : nums) {
            freq[num]++;
        }

        for (auto& [num, c] : freq) {
            if (c > n / 2) {
                dom = num;
                count = c;
                break;
            }
        }

        int leftCount = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == dom) leftCount++;
            int leftSize = i + 1;
            int rightSize = n - leftSize;
            int rightCount = count - leftCount;

            if (leftCount > leftSize / 2 && rightCount > rightSize / 2) {
                return i;
            }
        }

        return -1;
    }
};
