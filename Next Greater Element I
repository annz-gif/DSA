class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(), -1); 
        for (int i = 0; i < nums1.size(); i++){
            int j = 0;
            while(nums2[j] != nums1[i]){
                j++;
            }
            // search for the next greater element 
            for(int k = j + 1; k < nums2.size(); k++){
                if(nums2[k] > nums1[i]) {
                    ans[i] = nums2[k];
                    break;
                }
            }
        }
        return ans;
    }
};
