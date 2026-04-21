// Problem: Find the Duplicate Number
// Platform: LeetCode
// Approach: Frequency Array Counting
// Time Complexity: O(n)
// Space Complexity: O(n)

// Explanation:
// Create a frequency array initialized with 0.
// Traverse the input array and increment count of each number.
// As soon as any count becomes greater than 1,
// that number is the duplicate.
class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        vector<int> ans(arr.size()+1,0);
        for(int i = 0 ; i<arr.size() ; i++){
            ans[arr[i]]++;
            if(ans[arr[i]] > 1) return arr[i];
        }
        return -1;
    }
};
