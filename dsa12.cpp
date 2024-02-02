class Solution {
public:
    int search(vector<int>& nums, int target) {
       int st=0;
       int end=nums.size()-1;
       int mid;
       while(st<=end)
       {
           mid=st+(end-st)/2;
           if(nums[mid]==target)
           {
               return mid;
           }
          else if(nums[mid]<nums[end])
           {
               if(nums[mid]<target && nums[end]>=target)
               {
                   st=mid+1;
               }
               else
               {
                   end=mid-1;
               }
           }
           else
           {
if(target>=nums[st] && target<nums[mid])
{
    end=mid-1;
}
else
{
    st=mid+1;
}
           }
       }
       return -1; 
    }
};