class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> dist(m, vector<int>(n, -1));

        queue<pair<int,int>> q;
        for(int i =0 ; i<m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(mat[i][j] == 0){
                    dist[i][j] = 0;
                    q.push({i, j});
                }
            }
        }

        while(!q.empty()){
            pair<int, int> cell = q.front();
            int i = cell.first;
            int j = cell.second;
            q.pop();
            if(i + 1 < m && dist[i+1][j] == -1){
                dist[i+1][j] = dist[i][j] + 1;
                q.push({i+1,j});
            }
            if(j + 1 < n && dist[i][j+1] == -1){
                dist[i][j+1] = dist[i][j] + 1;
                q.push({i,j+1});
            }
            if(i - 1 >= 0  && dist[i-1][j] == -1){
                dist[i-1][j] = dist[i][j] + 1;
                q.push({i-1,j});
            }
            if(j - 1 >= 0 && dist[i][j-1] == -1){
                dist[i][j-1] = dist[i][j] + 1;
                q.push({i,j-1});
            }
        }
        return dist;
    }
};
