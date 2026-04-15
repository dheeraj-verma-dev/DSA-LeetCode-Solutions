// Problem: Missing Number
// Platform: LeetCode
// Approach: Sorting + Linear Scan
// Time Complexity: O(n log n)
// Space Complexity: O(1) or O(log n) (depending on sort implementation)

// Explanation:
// First, we sort the array so that elements should ideally match their indices.
// Then we traverse and find the first index where nums[i] != i.
// That index is the missing number.
// If all indices match, then the missing number is n.

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int idx = INT_MIN;
        bool flag = false;
        for(int i = 0; i<n ; i++){
        if(nums[i] != i ){
            idx = i;
            flag = true;
            break;
        }
        }
        if(flag == false) return n;
        return idx;
    }
};
