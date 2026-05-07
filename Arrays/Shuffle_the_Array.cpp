// Problem: Shuffle the Array
// Platform: LeetCode
// Approach: Two Pointer Simulation
// Time Complexity: O(n)
// Space Complexity: O(n)

// Explanation:
// First half contains x-values.
// Second half contains y-values.
// Traverse both halves simultaneously
// and push elements alternately into result array.

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> result;

        for(int i = 0, j = n ; i < n ; i++, j++){

            result.push_back(nums[i]);
            result.push_back(nums[j]);

        }
        return result;
    }
};
