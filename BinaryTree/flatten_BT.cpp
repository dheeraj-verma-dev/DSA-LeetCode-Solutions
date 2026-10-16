class Solution {
public:
    void flatten(TreeNode* root) {
        if (root == nullptr) return;

        TreeNode* left = root->left;
        TreeNode* right = root->right;

        root->left = nullptr;

        flatten(left);
        flatten(right);

        root->right = left;

        TreeNode* curr = root;

        while (curr->right != nullptr) {
            curr = curr->right;
        }

        curr->right = right;
    }
};
