class Solution {
public:
    void dfs(vector<vector<int>>& image, int m, int n, int sr,int  sc, int original, int color){
            image[sr][sc] = color;

            if((sr+1 < m)&& sc < n && image[sr+1][sc] == original){
                dfs(image, m, n,sr+1, sc, original, color);
            }
            if((sr-1) >= 0 && sc < n &&image[sr-1][sc] == original){
                dfs(image, m, n, sr-1, sc, original, color);
            }
            if(sr < m && (sc+1) < n &&image[sr][sc + 1] == original){
                dfs(image, m , n ,sr, sc+1, original, color);
            }
            if((sc - 1) >= 0 && sr < m && image[sr][sc-1] == original){
                dfs(image, m, n,sr, sc-1, original, color);
            }
        }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int original = image[sr][sc];
        int m = image.size();
        int n = image[0].size();
        if(original == color){
            return image;
        }

        dfs(image, m, n, sr, sc, original, color);

        return image;
    }
};
