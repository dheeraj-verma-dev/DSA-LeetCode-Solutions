// Problem: Pow(x, n)
// Platform: LeetCode
// Approach: Binary Exponentiation (Iterative)
// Time Complexity: O(log n)
// Space Complexity: O(1)

// Explanation:
// Instead of multiplying x, n times,
// repeatedly square the base and halve the exponent.
//
// If current exponent is odd, multiply result by x.
// Handle negative powers by converting:
//
// x^(-n) = (1/x)^n
//
// Use long long to safely handle INT_MIN.

class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double result = 1.0;
        
        while (N > 0) {
            if (N % 2 == 1) {
                result *= x;
            }
            x *= x;
            N /= 2;
        }
        
        return result;
    }
};
