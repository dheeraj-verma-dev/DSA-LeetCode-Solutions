// A bit confused

class Solution {
public:
    void dfs(vector<vector<char>>& arr, int m, int n, int i, int j){

        arr[i][j] = '0';

        if((i-1) >= 0 && arr[i-1][j] == '1'){
            dfs(arr, m, n, i-1, j);
        }
        if((j-1) >= 0 && arr[i][j-1] == '1'){
            dfs(arr, m , n, i, j-1);
        }
        if((i+1) < m && arr[i+1][j] == '1'){
            dfs(arr, m, n, i+1, j);
        }
        if((j+1) < n && arr[i][j+1] == '1'){
            dfs(arr, m, n, i, j+1);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for(int i =0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == '1'){
                    count++;
                    dfs(grid, m, n, i, j);
                }
            }
        }
        return count;
    }
};
