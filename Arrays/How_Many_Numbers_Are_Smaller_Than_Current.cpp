// Problem: How Many Numbers Are Smaller Than the Current Number
// Platform: LeetCode
// Approach: Brute Force Comparison
// Time Complexity: O(n^2)
// Space Complexity: O(n)

// Explanation:
// For every element, compare it with all other elements.
// Count how many numbers are smaller than the current element.
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for(int i = 0 ; i < n ; i++){
            int count = 0;
            for(int j = 0 ; j < n ; j++){
                if(j != i && nums[j] < nums[i]) count++;
            }
            ans.push_back(count);
        }

        return ans;
    }
};
