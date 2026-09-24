class Solution {
public:
    void bfs(vector<vector<char>>& grid, int x, int y, int m, int n, int& count ){
        queue<pair<int,int>> q;
        grid[x][y] = '0';
        q.push({x, y});
        while(!q.empty()){
            pair<int,int> cell = q.front();
            int i = cell.first;
            int j = cell.second;
            q.pop();
            if(i+1 < m && grid[i+1][j] == '1'){
                grid[i+1][j] = '0';
                q.push({i+1, j});
            }
            if(j+1 < n && grid[i][j+1] == '1'){
                grid[i][j+1] = '0';
                q.push({i, j+1});
            }
            if(i - 1 >= 0 && grid[i-1][j] == '1'){
                grid[i-1][j] = '0';
                q.push({i-1, j});
            }
            if(j - 1 >= 0 && grid[i][j-1] == '1'){
                grid[i][j-1] = '0';
                q.push({i, j-1});
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for(int i = 0; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == '1'){
                    count++;
                    bfs(grid, i, j, m, n, count);
                }
            }
        }
        
        return count;
    }
};
