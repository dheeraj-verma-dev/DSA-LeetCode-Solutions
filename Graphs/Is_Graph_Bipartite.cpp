class Solution {
public:
    bool bfs(int start, vector<vector<int>>& graph, vector<int>& color){
        queue<int> q;

        q.push(start);
        color[start] = 0;

        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(auto x : graph[node]){
                if(color[x] == color[node]){
                    return false;
                }
                if(color[x] == -1){
                    q.push(x);
                    if(color[node] == 0){
                        color[x] = 1;
                    }
                    else if(color[node] == 1){
                        color[x] = 0;
                    }
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        vector<int> color(graph.size(), -1);
        
        for(int i = 0 ; i < graph.size(); i++){
            if(color[i] == -1){
                if(!bfs(i, graph, color)) return false;
            }
        }
        
        
        return true;
    }
};
