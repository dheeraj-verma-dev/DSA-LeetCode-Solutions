// Problem: Search Insert Position
// Platform: LeetCode
// Approach: Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)

// Explanation:
// Use binary search to find the target.
// If target exists, return its index.
// If not found, return 'lo', which represents
// the correct insertion position after search ends.

class Solution {
public:
    void Search(vector<int>& nums, int target, int& lo, int& hi, bool& flag, int& idx){
        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
            if(nums[mid] == target){
                flag = true;
                idx = mid;
                return;
            }
            if(target > nums[mid]){
                lo = mid + 1;
            }
            if(target < nums[mid]){
                hi = mid - 1;
            }
        }
    }
    int searchInsert(vector<int>& nums, int target) {
        bool flag = false;
        int n = nums.size();
        int lo = 0;
        int hi = n - 1;
        int idx = INT_MIN;
        Search(nums, target, lo, hi, flag, idx);
        if(flag == true) return idx;
        return lo;
    }
};
