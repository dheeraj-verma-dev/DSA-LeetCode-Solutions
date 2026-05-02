// Problem: Concatenation of Array
// Platform: LeetCode
// Approach: Simulation using Modulo
// Time Complexity: O(n)
// Space Complexity: O(2n)

// Explanation:
// Create a new array of size 2*n.
// Fill it by repeating elements of original array
// using modulo indexing (i % n).

class Solution {
public:
    vector<int> getConcatenation(vector<int>& arr) {
       int n = arr.size();

       vector<int> ans(2*n, 0); 

       int i = 0;
       int j = 0;

       while(j < 2*n ){

        ans[j] = arr[(i%n)];

        i++;
        j++;

       }

       return ans; 
    }
};
