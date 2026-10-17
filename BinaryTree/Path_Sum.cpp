/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode* root, int targetSum, int sum, bool& check){
        if(root == NULL){
           
            return;
        }
            sum+= root->val;

        if(root->left == NULL && root->right == NULL && sum == targetSum){
            check = true;
            return;
        }
        preorder(root->left, targetSum, sum , check);
        preorder(root->right, targetSum , sum, check);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool check = false;
        int sum = 0;
        preorder(root, targetSum, sum, check);
        if(check == true) return true;
        return false;
    }
};
