class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        int n = nums.size(), rp = 1;
        //left pass
        for(int i =0; i< n; i++)
        {
            ans[i] = rp;
            rp = rp* nums[i];
        }
        //right pass
        rp = 1;
        for(int i = n-1; i>=0; i--)
        {
            ans[i] = ans[i] * rp;
            rp = rp * nums[i];
        }
        return ans;
        
    }
};