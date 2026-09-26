class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int, int>> q;
        int minutes = 0;

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 2){
                    q.push({i, j});
                }
            }
        }
        while(!q.empty()){
            int size = q.size();
            bool rotted = false;

            for(int x = 0 ; x < size ; x++){
                pair<int, int> cell = q.front();
                q.pop();
                int i = cell.first;
                int j = cell.second;
                if(i+1 < m && grid[i+1][j] == 1){
                    grid[i+1][j] = 2;
                    q.push({i+1, j});
                    rotted = true;
                }
                if(j+1 < n && grid[i][j+1] == 1){
                    grid[i][j+1] = 2;
                    q.push({i, j+1});
                    rotted = true;

                }
                if(i-1 >= 0 && grid[i-1][j] == 1){
                    grid[i-1][j] = 2;
                    q.push({i-1, j});
                    rotted = true;
                }
                if(j-1 >= 0 && grid[i][j-1] == 1){
                    grid[i][j-1] = 2;
                    q.push({i, j-1});
                    rotted = true;
                }
            
            }
            if(rotted == true) minutes++;
        }

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 1){
                      return -1;
                }
            }
        }
        return minutes;
    }
};
