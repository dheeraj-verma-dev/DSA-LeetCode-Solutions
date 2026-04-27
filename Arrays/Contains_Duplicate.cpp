// Problem: Contains Duplicate
// Platform: LeetCode
// Approach: Hash Set Lookup
// Time Complexity: O(n) average
// Space Complexity: O(n)

// Explanation:
// Traverse the array.
// If an element already exists in the hash set,
// duplicate is found.
// Otherwise insert the element into the set.

// First used brute force approach but then It was showing TLE

class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        // int n = arr.size();
        // //bool flag = false;
        // for(int i = 0 ; i < n ; i++){
        //     for(int j = i+1 ; j < n  ; j++){
        //         if(arr[i] == arr[j]){
        //             //flag = true;
        //            // break;
        //            return true;
        //         }
        //     }
        // }
        // //if(flag == false) return false ;
        // return false;

        unordered_set<int> st;
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            if(st.count(arr[i]) == true)
                return true;

            st.insert(arr[i]);
        }
        return false;

    }
};
