class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        int count1 = 0;
        int count2 = 0;
        
        
        for(auto i : nums1){
        
            if(find(nums2.begin(),nums2.end(),i)!=nums2.end()) count1++;
        }

        for(auto i : nums2){
            
            if(find(nums1.begin(),nums1.end(),i)!=nums1.end()) count2++;
            
        }

        return {count1,count2};
    }
};
