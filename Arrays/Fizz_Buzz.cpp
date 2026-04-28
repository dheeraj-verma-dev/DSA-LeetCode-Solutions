// Problem: Fizz Buzz
// Platform: LeetCode
// Approach: Conditional Simulation
// Time Complexity: O(n)
// Space Complexity: O(n)

// Explanation:
// Traverse numbers from 1 to n.
// For multiples of both 3 and 5 -> "FizzBuzz"
// For multiples of 3 -> "Fizz"
// For multiples of 5 -> "Buzz"
// Otherwise store the number as string.

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i = 1 ; i <= n ; i++){
        if(i % 3 == 0 && i % 5 == 0) ans.push_back("FizzBuzz");
        else if(i % 3 == 0) ans.push_back("Fizz");
        else if(i % 5 == 0) ans.push_back("Buzz");
        else{
            ans.push_back(to_string(i));
        }
        }
        return ans;
    }
};
