class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg_count = binarySearch(nums, 0);
        int pos_count = nums.size() - binarySearch(nums, 1);
        return max(neg_count, pos_count);
    }

private:
    int binarySearch(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, result = nums.size();
        
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                result = mid;
                right = mid - 1;
            }
        }
        
        return result;
    }
};
