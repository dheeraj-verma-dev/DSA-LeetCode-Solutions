// Problem: Insert into a Binary Search Tree
// Platform: LeetCode
// Approach: Recursive BST Insertion
// Time Complexity: O(h)
// Space Complexity: O(h)

// Explanation:
// Compare value with current node:
// - If smaller → insert into left subtree
// - If greater → insert into right subtree
// Base case: when reaching NULL, create new node.

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return new TreeNode(val);

        if(val < root->val ){// go left
         root->left = insertIntoBST(root->left, val);
        }

        else if(val > root->val){// go right
         root->right = insertIntoBST(root->right, val);
        }

        return root;
    }
};
