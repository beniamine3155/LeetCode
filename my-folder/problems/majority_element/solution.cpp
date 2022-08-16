class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 1, pos = 0;
        for(int i=1; i<n ; i++)
        {
            if(nums[pos] == nums[i])
                count++;
            else
                count--;
            if(count==0)
            {
                count = 1;
                pos = i;
            }
                
        }
        count = 0;
        for(int i =0; i<n; i++)
        {
            if(nums[pos] == nums[i])
            {
                count++;
            }
        }
        if(count<=(n/2))
            return -1;
        else
            return nums[pos];
   
    }
};