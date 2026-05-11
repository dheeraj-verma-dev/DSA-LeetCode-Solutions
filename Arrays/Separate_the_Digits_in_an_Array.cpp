// Problem: Separate the Digits in an Array
// Platform: LeetCode
// Approach: Digit Extraction using Stack
// Time Complexity: O(d)
// Space Complexity: O(d)

// Explanation:
// Extract digits using modulo and division.
// Use stack to preserve original digit order.
// Push separated digits into answer vector.

class Solution {
public:
    void breakNum(int n, vector<int>& ans){
        stack<int> st;
        while(n > 0){
            int ld = n%10;
            st.push(ld);
            n/=10;
        }
        while(st.size() > 0){
        ans.push_back(st.top());
        st.pop();
        }
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
        breakNum(nums[i], ans);
       }

        return ans;

        
    }
};
