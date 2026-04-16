// Problem: Find Largest Value in Each Tree Row
// Platform: LeetCode
// Approach: DFS Level Traversal (Height + Per-Level Search)
// Time Complexity: O(n^2) worst case
// Space Complexity: O(h)

// Explanation:
// First compute the height of the tree.
// Then for each level, recursively traverse nodes at that level
// and track the maximum value.
// Since the tree may be traversed once per level, this can become O(n^2)
// in skewed trees.

class Solution {
public:
    int level(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(level(root->left), level(root->right));
    }
    
    void levelOrder(TreeNode* root, int curr, int level, int& mx){
        if(root == NULL) return;
        vector<int> temp;
        if(curr == level){
            mx = max(mx, root->val);
            return;
        }
        levelOrder(root->left, curr+1, level, mx);
        levelOrder(root->right, curr+1, level, mx);
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        int n = level(root);
        for(int i = 0; i < n ; i++ ){
            int mx = INT_MIN;
            levelOrder(root, 0, i, mx);
            ans.push_back(mx);
        }
        return ans;
    }
};
