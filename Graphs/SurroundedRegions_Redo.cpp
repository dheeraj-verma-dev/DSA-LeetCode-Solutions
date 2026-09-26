class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        queue<pair<int,int>> q;
        for(int i = 0 ; i < m ; i++){
            if(board[i][0] == 'O'){
                q.push({i, 0});
                board[i][0] = 'S';
            }
            if(board[i][n-1] == 'O'){
                q.push({i, n-1});
                board[i][n-1] = 'S';
            }
        }
        for(int j = 0 ; j < n ; j++){
            if(board[0][j] == 'O'){
                q.push({0, j});
                board[0][j] = 'S';
            }
            if(board[m-1][j] == 'O'){
                q.push({m-1, j});
                board[m-1][j] = 'S';
            }
        }

        while(!q.empty()){
            pair<int,int> cell = q.front();
            int i = cell.first;
            int j = cell.second;
            q.pop();

            if(i+1 < m && board[i+1][j] == 'O'){
                board[i+1][j] = 'S';
                q.push({i+1, j});
            }
            if(j+1 < n && board[i][j+1] == 'O'){
                board[i][j+1] = 'S';
                q.push({i, j+1});
            }
            if(i-1 >= 0 && board[i-1][j] == 'O'){
                board[i-1][j] = 'S';
                q.push({i-1, j});
            }
            if(j -1 >= 0  && board[i][j-1] == 'O'){
                board[i][j-1] = 'S';
                q.push({i, j-1});
            }
        }
        for(int i =0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(board[i][j] =='S'){
                    board[i][j] = 'O';
                }
                else if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
    }
};
