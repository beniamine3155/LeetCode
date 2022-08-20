class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int left = INT_MAX, mid = INT_MAX ;
        for(int i = 0; i<n ; i++)
        {
            if(nums[i] > mid) return true;
            else if(nums[i] < mid  && nums[i] > left) mid = nums[i];
            else if(nums[i] < left) left = nums[i];
        }
        return false;
    }
};