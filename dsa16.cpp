class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i,ans=1,m=INT_MIN;
        for(i=0;i<nums.size();i++)
        {
            ans=ans*nums[i];
            
            if(m<ans)
            m=ans;
            if(ans==0) 
            ans=1;
        }
        ans=1;
        for(i=nums.size()-1;i>=0;i--)
        {
            ans=ans*nums[i];
            if(m<ans)
            m=ans;
            if(ans==0)
            ans=1;
        }
        return m;
    }
}
