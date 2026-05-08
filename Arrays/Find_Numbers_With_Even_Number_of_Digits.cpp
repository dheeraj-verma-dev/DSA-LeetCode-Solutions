// Problem: Find Numbers with Even Number of Digits
// Platform: LeetCode
// Approach: Digit Counting
// Time Complexity: O(n * d)
// Space Complexity: O(1)

// Explanation:
// Count digits of every number by repeatedly dividing by 10.
// If digit count is even, increment answer.

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0 ;

        for(int i = 0 ; i < n ; i++){
            int temp = 0 ;
            while(nums[i] > 0){
            int ld = nums[i] % 10;
            temp++;
            nums[i] /= 10;

            }
            if(temp % 2 == 0){
                count++;
            }
        }

        return count;
    }
};
