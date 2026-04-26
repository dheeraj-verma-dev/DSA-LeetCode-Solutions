// Problem: Majority Element
// Platform: LeetCode
// Approach: Brute Force Frequency Counting
// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Explanation:
// For each element, count how many times it appears
// by scanning the remaining array.
// If count becomes greater than n/2,
// return that element as majority element.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int i, j;
        for(i = 0 ; i < n ; i++){
            int count = 1;
            for(j = i + 1 ; j < n ; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count > (n / 2)) return nums[i];
        }
        return -1;
    }
};
