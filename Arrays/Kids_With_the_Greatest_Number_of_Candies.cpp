// Problem: Kids With the Greatest Number of Candies
// Platform: LeetCode
// Approach: Precompute Maximum
// Time Complexity: O(n)
// Space Complexity: O(n)

// Explanation:
// First compute the maximum candies among all children.
// Then check if each child can reach or exceed
// the maximum after adding extraCandies.
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int n = candies.size();
        int maxi = INT_MIN;
        for(int j = 0 ; j < n ; j++){
                maxi = max(maxi, candies[j]);
        }
        for(int i = 0; i < n ; i++){

            int temp = candies[i];
            temp += extraCandies;
                if(temp >= maxi){
                    result.push_back(true);
                }
                else {
                    result.push_back(false);
                }
        }

        return result;
    }
};
