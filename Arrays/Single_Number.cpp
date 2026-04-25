// Problem: Single Number
// Platform: LeetCode
// Approach: Frequency Array with Offset Indexing
// Time Complexity: O(n)
// Space Complexity: O(range)

// Explanation:
// First find minimum and maximum values.
// Create a frequency array for the full value range.
// Use (value - minimum) as index to handle negatives.
// Count frequencies, then return the element
// whose frequency is 1.
class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int n = arr.size();

        if(n == 1) {
            return arr[0];
        }

        // Find min and max value
        int mini = arr[0];
        int maxi = arr[0];

        for(int i = 1; i < n; i++) {
            if(arr[i] < mini) mini = arr[i];
            if(arr[i] > maxi) maxi = arr[i];
        }

        // Frequency array size = range
        vector<int> freq(maxi - mini + 1, 0);

        // Count frequency
        for(int i = 0; i < n; i++) {
            freq[arr[i] - mini]++;
        }

        // Find single number
        for(int i = 0; i < n; i++) {
            if(freq[arr[i] - mini] == 1) {
                return arr[i];
            }
        }

        return -1;
    }
};
