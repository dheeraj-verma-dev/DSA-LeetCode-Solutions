// Problem: To Lower Case
// Platform: LeetCode
// Approach: ASCII Character Conversion
// Time Complexity: O(n)
// Space Complexity: O(1)

// Explanation:
// Traverse the string.
// If character is uppercase alphabet,
// convert it to lowercase using ASCII difference.

class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0 ; i<s.length() ; i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        }
        
        return s;
    }
};
