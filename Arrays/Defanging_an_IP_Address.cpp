// Problem: Defanging an IP Address
// Platform: LeetCode
// Approach: String Traversal and Replacement
// Time Complexity: O(n)
// Space Complexity: O(n)

// Explanation:
// Traverse the string.
// Replace each '.' with "[.]"
// Build a new string and return it.

class Solution {
public:
    string defangIPaddr(string address) {
        string result = "";

        for(int i = 0; i < address.length(); i++){
            if(address[i] == '.'){
                result += "[.]";
            }
            else {
                result+= address[i];
            }
        }

        return result;
    }
};
