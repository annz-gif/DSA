class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        make_heap(gifts.begin(), gifts.end());
        for (int i=0, x=INT_MAX; i<k && x>1; i++){
            pop_heap(gifts.begin(), gifts.end());
            x=gifts.back();
            gifts.back()=sqrt(gifts.back());
            push_heap(gifts.begin(), gifts.end());
        }
        return accumulate(gifts.begin(), gifts.end(), 0LL);
    }
};
