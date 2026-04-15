// Problem: Sum of Left Leaves
// Platform: LeetCode
// Approach: DFS Traversal
// Time Complexity: O(n)
// Space Complexity: O(h)

// Explanation:
// Traverse the tree and check if a node has a left child
// that is a leaf. If yes, add its value to sum.

class Solution {
public:
    void checkLeftLeaf(TreeNode* root, int& sum){
        if(root == NULL) return;
        
        if(root->left != NULL && root->left->left == NULL && root->left->right == NULL) sum = sum + root->left->val;
    
        checkLeftLeaf(root->left, sum);
        checkLeftLeaf(root->right, sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        checkLeftLeaf(root, sum);
        return sum;
    }
};
