//minimum subarray length
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i,j,k=0;

        int sum=0,min=nums.size();
        for(i=0,j=0;j<nums.size() ||sum>=target;){
            if(sum<target){
                sum=sum+nums[j];
                j++;}
            else{
                k=1;
            if(min>(j-i))
            min=(j-i);
                sum=sum-nums[i];
                i++;            }  }
       
       if(k==1)return min;
        else return 0;
    }
};