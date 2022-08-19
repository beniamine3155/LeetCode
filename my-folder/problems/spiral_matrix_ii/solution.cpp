class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> matrix (n, vector<int>(n));
        int top=0, bottom=n-1, left=0, right=n-1, index =1;
        while(top<=bottom && left<=right)
        {
            for(int i =left; i<=right; i++)
            {
                matrix[top][i] = index;
                index++;
            }
            top++;
                    
            for(int i=top; i<=bottom; i++)
            {
                matrix[i][right] = index;
                index++;
            }
            right--;
            
            if(top<=bottom)
            {
                for(int i=right; i>=left; i--)
                {
                    matrix[bottom][i] = index;
                    index++;
                }
                bottom--;
            }
            if(left<=right)
            {
                for(int i=bottom; i>=top; i--)
                {
                    matrix[i][left]=index;
                    index++;
                }
                left++;
            }
        }
        return matrix;
    }
};