class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        //visualising 2D array as 1D to solve
        int row = grid.size();
        int col = grid[0].size();
        int n = row * col;

        if(k == 0)
            return grid;

        k = k%n; //normalising k in case k>=n

        /*how to find the place of ith value (of 1D array) in 2D array
            row = [i]/col;
            col = [i]%col;
        */

        auto reverse = [&](int i, int j){ //lambda function
            while(i<j){
                swap(grid[i/col][i%col], grid[j/col][j%col]);
                i++;
                j--;
            }
        };

        reverse(0, n-1);
        reverse(0, k-1);
        reverse(k, n-1);
        return grid;
    }
};