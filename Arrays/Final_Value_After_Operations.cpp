// Problem: Final Value of Variable After Performing Operations
// Platform: LeetCode
// Approach: Simulation using String Comparison
// Time Complexity: O(n)
// Space Complexity: O(1)

// Explanation:
// Traverse the operations list.
// If operation contains increment (++), increase X.
// If operation contains decrement (--), decrease X.

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;

        for(int i = 0 ; i < operations.size() ; i++){

            if(operations[i] == "--X" || operations[i] == "X--") X = X - 1;
            if(operations[i] == "++X" || operations[i] == "X++") X = X + 1;
        }

        return X;
    }
};
