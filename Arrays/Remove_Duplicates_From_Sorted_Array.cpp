// Problem: Remove Duplicates from Sorted Array
// Platform: LeetCode
// Approach: Two Pointers (In-Place)
// Time Complexity: O(n)
// Space Complexity: O(1)

// Explanation:
// Since the array is sorted, duplicates are adjacent.
// Use two pointers to detect changes in value.
// Store each unique element at the front of the array.
// Return the count of unique elements.
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int i = 0;
        int j = i+1;
        int count = 0;
        //vector<int> v;
        while(j < nums.size()){
            if(nums[i] == nums[j]){
                j++;
            }
            else {
                //v.push_back(nums[i]);
                nums[count] = nums[i];
                count++;
                i = j;
                j = i + 1;
            }
        }
        // for(int k = 1 ; k <= (nums.size() - v.size()) ; k++){
        //     v.push_back('_');
        // }
        nums[count] = nums[i];
        count++ ;
        return count;
    }
};
