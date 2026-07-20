class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size();
        int cols = grid[0].size();
        int elem = rows*cols;
        k = k % elem;

        vector<vector<int>> answer = grid;
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                int index = (i * cols + j - k + rows * cols) % (rows * cols);
                int oldRow = index / cols;
                int oldCol = index % cols;

                answer[i][j] = grid[oldRow][oldCol];
            }
        }
        return answer;
    }
};