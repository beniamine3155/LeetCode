class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int n = nums.size();
      unordered_map<int, int> prevSum;  
      int c =0, sum = 0;
        for(int i = 0; i<n; i++)
        {
            sum += nums[i];
            if(sum == k) c++;
            if(prevSum.find(sum-k) != prevSum.end()) 
                c+=prevSum[sum-k];
            
            prevSum[sum]++;
        }
        return c;
    }
};