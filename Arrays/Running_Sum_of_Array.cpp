// Problem: Running Sum of 1D Array
// Platform: LeetCode
// Approach: Brute Force (Nested Loop)
// Time Complexity: O(n^2)
// Space Complexity: O(n)

// Explanation:
// For each index i, calculate sum from 0 to i
// using inner loop.

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        
        for(int i = 0 ; i < n ; i++){
            int sum = 0;
            for(int j = 0 ; j <= i ; j++){
                sum += nums[j];
            }
            ans.push_back(sum);
        }

        return ans;
    }
};
