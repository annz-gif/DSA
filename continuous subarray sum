#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        map[0] = -1; // To handle the case where the sub-array starts from index 0
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = sum % k;

            if (map.find(rem) != map.end()) {
                if (i - map[rem] > 1) {
                    return true;
                }
            } else {
                map[rem] = i;
            }
        }

        return false;
    }
};
