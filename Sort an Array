void merge(vector<int>& array, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    vector<int> left_part(n1), right_part(n2);

    for (int i = 0; i < n1; ++i)
        left_part[i] = array[low + i];
    for (int i = 0; i < n2; ++i)
        right_part[i] = array[mid + 1 + i];

    int p1 = 0, p2 = 0, write_ind = low;
    while (p1 < n1 && p2 < n2) {
        if (left_part[p1] <= right_part[p2]) {
            array[write_ind] = left_part[p1++];
        } else {
            array[write_ind] = right_part[p2++];
        }
        ++write_ind;
    }

    while (p1 < n1)
        array[write_ind++] = left_part[p1++];

    while (p2 < n2)
        array[write_ind++] = right_part[p2++];
}

void merge_sort(vector<int>& array, int low, int high) {
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;
    merge_sort(array, low, mid);
    merge_sort(array, mid + 1, high);
    merge(array, low, mid, high);
}

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums, 0, nums.size() - 1);
        return nums;
    }
};
