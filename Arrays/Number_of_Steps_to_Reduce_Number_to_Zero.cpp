// Problem: Number of Steps to Reduce a Number to Zero
// Platform: LeetCode
// Approach: Simulation
// Time Complexity: O(log n)
// Space Complexity: O(1)

// Explanation:
// If number is even, divide by 2.
// If number is odd, subtract 1.
// Count operations until number becomes zero.
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0 ;

        while(num != 0){
            if(num % 2 == 0) {
                num/= 2;
                count++;
            }
            else {
                num = num - 1;
                count++;
                }
        }
        return count;
    }
};
