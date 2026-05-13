// Problem: Jewels and Stones
// Platform: LeetCode
// Approach: Brute Force String Comparison
// Time Complexity: O(j * s)
// Space Complexity: O(1)

// Explanation:
// Compare every character in jewels
// with every character in stones.
// Increment count whenever characters match.

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0 ;

        for(int i = 0 ; i < jewels.length() ; i++){
            for(int j = 0 ; j < stones.length() ; j++){
                if(jewels[i] == stones[j])  count++;   
            }
        }
        return count;
    }
};
