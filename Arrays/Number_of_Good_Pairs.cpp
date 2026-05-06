// Problem: Number of Good Pairs
// Platform: LeetCode
// Approach: Brute Force (Nested Loop)
// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Explanation:
// Check every pair (i, j) such that i < j.
// If nums[i] == nums[j], count it as a good pair.

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int i ,j ;
        int count = 0;

        for( i = 0; i < n ; i++){
            for( j = i+1 ; j < n ; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }


        }
        return count ;
    }
};
