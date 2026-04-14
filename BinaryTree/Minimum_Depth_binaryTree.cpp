// Problem: Minimum Depth of Binary Tree
// Platform: LeetCode
// Approach: Recursive DFS
// Time Complexity: O(n)
// Space Complexity: O(h)

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;

        int l = minDepth(root->left);
        int r = minDepth(root->right);

        if(l == 0) return r + 1;
        if(r == 0) return l + 1;

        return 1 + min(l, r);
    }
};
