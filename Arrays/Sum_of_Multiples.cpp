// Problem: Sum of Multiples
// Platform: LeetCode
// Approach: Direct Traversal
// Time Complexity: O(n)
// Space Complexity: O(1)

// Explanation:
// Traverse numbers from 1 to n.
// Add numbers divisible by 3, 5, or 7.

class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0 ;
        
        for(int i = 1 ; i <= n ; i++){
        if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0) sum+= i;
            
        }
        return sum;
    }
};
