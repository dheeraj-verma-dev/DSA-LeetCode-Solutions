// Problem: Minimum Absolute Difference in BST
// Platform: LeetCode
// Approach: Inorder Traversal + Adjacent Comparison
// Time Complexity: O(n)
// Space Complexity: O(n)

// Explanation:
// Inorder traversal of a BST gives sorted node values.
// Store values in vector.
// The minimum absolute difference must occur
// between adjacent elements in sorted order.

class Solution {
public:
    void inorder(TreeNode* root, vector<int>& v){
        if(root == NULL) return;

        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;

        inorder(root, v);
        int mini = INT_MAX;
        for(int i = 0, j = 1; j < v.size(); i++, j++){
            int diff = abs(v[i] - v[j]);
            mini = min(mini, diff);
        }

        return mini;

    }
};
