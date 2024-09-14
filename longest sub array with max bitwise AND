class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int len = 1;

        // step 01
        int mx = *max_element(nums.begin(),nums.end()); //O(n)

        // step 02
        int tmp_len=0;
        for(int i=0;i<nums.size();i++){ // O(n)
            if(nums[i]==mx){
                tmp_len++; // 3
            }
            else{
                len = max(len, tmp_len);
                tmp_len=0;
            }
        }

        len = max(len, tmp_len);

        return len;
    }
};
