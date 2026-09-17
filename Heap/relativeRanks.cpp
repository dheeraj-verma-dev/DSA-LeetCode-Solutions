class Solution {
public:

    // TC = O(n) + O(n logn) + O(n)
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> v;
        vector<string> answer(n);
        for(int i = 0 ; i < n ; i++){ //O(n)
            v.push_back({score[i], i});
        }
        sort(v.begin(), v.end());  // O(n logn)
        reverse(v.begin(), v.end());

        for(int i = 0 ; i<n; i++){ // O(n)
            if(i == 0){
                answer[v[i].second] = ("Gold Medal");
            }
            else if(i == 1){
                answer[v[i].second] =  ("Silver Medal");
            }
            else if(i == 2){
                answer[v[i].second] = ("Bronze Medal");
            }
            else{
                answer[v[i].second] = (to_string(i+1));
            }
        }
        return answer;
    }
};
