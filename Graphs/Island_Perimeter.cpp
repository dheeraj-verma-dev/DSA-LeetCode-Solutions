class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int temp_count = 0;
        int total_count = 0;
        queue<pair<int, int>> q;
        vector<vector<int>> vis(m, vector<int>(n, 0)); 

        for(int i = 0 ; i < m ;  i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 1){
                    total_count += 4;
                }
            }
        }

        for(int i = 0 ; i < m ;  i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 1){
                    q.push({i, j});
                    vis[i][j] = 1;                   
                    break;
                }
            }
            if(!q.empty()){
                break;
            }
        }
    
        
        while(!q.empty()){
            pair<int, int> cell = q.front();
            q.pop();
            int i = cell.first;
            int j = cell.second;
            
           // int u = 0,l = 0,r = 0,d = 0;

            if(i+1 < m && grid[i+1][j] == 1){
               // d+=2;
                temp_count += 2;
                if(vis[i+1][j] != 1){
                    q.push({i+1, j});
                    vis[i+1][j] = 1;
                }
            }

            if(j+1 < n && grid[i][j+1] == 1){
               // r+=2;
                temp_count += 2;
                if(vis[i][j+1] != 1){
                    q.push({i, j+1});
                    vis[i][j+1] = 1;
                }
            }
            if(i-1 >= 0 && grid[i-1][j] == 1){
               // u+=2;
                temp_count += 2;
                if(vis[i-1][j] != 1){
                   q.push({i-1, j});
                   vis[i-1][j] = 1;
                }
            }
            if(j-1 >= 0 && grid[i][j-1] == 1){
                //l+=2;
                temp_count += 2;
                if(vis[i][j-1] != 1){
                    q.push({i, j-1});
                    vis[i][j-1] = 1;
                }
            }
                  
        }
        return total_count - temp_count/2;
    }
};
