class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size(); 
        int original = image[sr][sc];
        if(original == color){
            return image;
        }

        queue<pair<int,int>> q;
        image[sr][sc] = color;
        q.push({sr, sc});
       
        while(!q.empty()){
            pair<int, int> cell = q.front();
            int i = cell.first;
            int j = cell.second;

            q.pop();

            if(i+1 < m && image[i+1][j] == original){
                image[i+1][j] = color;
                q.push({i+1, j});
            }
            if(j+1 < n && image[i][j+1] == original){
                image[i][j+1] = color;
                q.push({i, j+1});
            }
            if(i-1 >= 0 && image[i-1][j] == original){
                image[i-1][j] = color;
                q.push({i-1, j});
            }
            if(j-1 >= 0 && image[i][j-1] == original){
                image[i][j-1] = color;
                q.push({i, j-1});
            }
        }
        return image;
    }
};
