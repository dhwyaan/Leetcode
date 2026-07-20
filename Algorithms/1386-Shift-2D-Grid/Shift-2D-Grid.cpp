class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> temp;
        for (vector<int> i: grid){
            for (int j: i){
                temp.push_back(j);
            }
        }
        int rows = grid.size();
        int cols = grid[0].size();
        int elem = rows*cols;
        k = k%elem;
        for (int i = 0; i<k; i++){
            int x = temp[elem-1];
            for (int j = elem - 1; j>0; j--){
                temp[j] = temp[j-1];
            }
            temp[0] = x;
        }
        for (int i = 0; i<rows; i++){
            for (int j = 0; j<cols;j++){
                grid[i][j] = temp[i*cols+j];
            }
        }
        return grid;
    }
};