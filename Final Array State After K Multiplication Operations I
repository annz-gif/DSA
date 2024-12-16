class Solution {
public:
    using int2=pair<int, int>;
    static vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        const int n=nums.size();
        vector<int2> heap(n);
        for(int i=0; i<n; i++){
            heap[i]={nums[i], i};
        }
        make_heap(heap.begin(), heap.end(), greater<>{});
        for(int i=0; i<k; i++){
            pop_heap(heap.begin(), heap.end(), greater<>{});
            heap.back().first*=multiplier;
            push_heap(heap.begin(), heap.end(), greater<>{});
        }
        for(auto& [x, i]: heap)
            nums[i]=x;

        return nums;
    }
};


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
