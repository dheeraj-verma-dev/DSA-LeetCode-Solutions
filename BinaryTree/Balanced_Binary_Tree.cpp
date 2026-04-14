// Problem: Balanced Binary Tree
// Platform: LeetCode
// Approach: Recursive Height Calculation (Brute Force)
// Time Complexity: O(n^2)
// Space Complexity: O(h)

// Explanation:
// For each node, we calculate the height of left and right subtrees
// and check if their difference is <= 1.
// This process is repeated for every node, leading to repeated height calculations.
class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        int diff = 0;
        int lst = levels(root->left);
        int rst = levels(root->right);
        diff = abs(lst-rst);
        if(diff > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
