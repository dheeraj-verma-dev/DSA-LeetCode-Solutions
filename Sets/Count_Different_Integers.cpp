// Problem: Count Number of Distinct Integers After Reverse Operations
// Platform: LeetCode
// Approach: Hashing + Digit Reversal
// Time Complexity: O(n * d)
// Space Complexity: O(n)

// Explanation:
// For each number, we compute its reverse and insert both the original
// and reversed values into an unordered_set to ensure uniqueness.
// Finally, the size of the set gives the count of distinct integers.


class Solution {
public:
    int reverse(int n){
        int r = 0;
        while(n>0){
            r = r * 10;
            r = r + (n % 10);
            n = n/10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        for(int i = 0 ; i<n ; i++){
            int rev = reverse(nums[i]);
            s.insert(nums[i]);
            s.insert(rev);
        }
        return s.size();
    }
};
