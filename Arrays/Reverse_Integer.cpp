// Problem: Reverse Integer
// Platform: LeetCode
// Approach: Digit Extraction + Overflow Check
// Time Complexity: O(d)
// Space Complexity: O(1)

// Explanation:
// Repeatedly extract last digit using modulo (%10)
// and build reversed number.
// Use long long to safely detect overflow.
// If reversed value exceeds 32-bit signed integer range,
// return 0.

class Solution {
public:
    int reverse(int x) {
    long long rev = 0;
    while(x != 0){
        int ld = x % 10;
        rev = rev * 10 + ld;
        x/=10;
    }
    if(rev > INT_MAX || rev < INT_MIN) return 0;
    return (int ) rev;
    }
};
