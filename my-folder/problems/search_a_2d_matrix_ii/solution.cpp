class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), j = matrix[0].size()-1;
        int i = 0;
        while (i < n && j >= 0) {
            int cell = matrix[i][j];
            if (cell == target) return true;
            else if (cell > target) j--;
            else i++;
        }
        return false;
        
    } 
};