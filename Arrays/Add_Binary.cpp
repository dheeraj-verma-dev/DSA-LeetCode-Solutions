// Problem: Add Binary
// Platform: LeetCode
// Approach: Simulated Binary Addition
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)

// Explanation:
// Traverse both binary strings from right to left.
// Add corresponding bits along with carry.
// Store current result bit at front of answer string.
// Continue until both strings and carry are exhausted.
class Solution {
public:
    string addBinary(string a, string b) {

        int i = a.length() - 1;
        int j = b.length() - 1;

        string result = "";
        int carry = 0;

        while(i >= 0 || j >= 0 || carry) {

            int sum = carry;

            if(i >= 0) {
                sum += a[i] - '0';
                i--;
            }

            if(j >= 0) {
                sum += b[j] - '0';
                j--;
            }

            result = char((sum % 2) + '0') + result;

            carry = sum / 2;
        }

        return result;
    }
};
