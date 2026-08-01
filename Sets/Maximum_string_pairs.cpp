class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count = 0 ;
        /* ANS--> 1  O(n^2) */


        // for(int i = 0; i < n ; i++){
        //     for(int j = i+1; j < n ; j++){
        //         reverse(words[j].begin(), words[j].end());
        //         if(words[i] == words[j] ){
        //             count++;
        //         }
        //     }
        // }
        // return count;

        // ANS --> 2  O(n)

        
        unordered_set<string> s;
        s.insert(words[0]);
        for(int i = 1 ; i< n ; i++){
            string rev = words[i];
            reverse(rev.begin(), rev.end());
            if(s.find(rev) != s.end()){
                count++;
            }
            else{
                s.insert(words[i]);
            }

        }
        return count;
    }
};
