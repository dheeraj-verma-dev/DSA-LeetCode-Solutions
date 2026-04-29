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
        bool isNegative = false;
        long long num = x;
        if(num < 0){
            isNegative = true;
            num = -num;
        }
        
        while(num > 0){
            int lastDigit = num % 10;
            rev = rev * 10 + lastDigit;
            num /= 10;
        }

        if(isNegative == true) {
            rev = -rev;
        }

        if(rev > INT_MAX || rev < INT_MIN) return 0;

        return rev;
    }
};
