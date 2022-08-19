class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int r=0; r<n; r++)
        {
            int left = 0, right = n-1;
            while(left<right)
            {
                swap(matrix[r][left], matrix[r][right]);
                left++;
                right--;
            }
        }
    }
};