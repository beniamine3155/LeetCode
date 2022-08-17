class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        if(intervals.size()==0)
        {
            return ans;
        }
        sort(intervals.begin(),intervals.end());
        vector<int>v=intervals[0];
        for(auto it: intervals)
        {
            if(it[0]<=v[1])
            {
                v[1] = max(it[1], v[1]);
            }
            else
            {
                ans.push_back(v);
                v=it;
            }
        }
        ans.push_back(v);
        return ans;
    }
};