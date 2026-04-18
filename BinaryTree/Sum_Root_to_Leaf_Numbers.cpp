// Problem: Sum Root to Leaf Numbers
// Platform: LeetCode
// Approach: DFS using Path String Construction
// Time Complexity: O(n * h)
// Space Complexity: O(h)

// Explanation:
// Traverse all root-to-leaf paths.
// Build the digit string along the path.
// At leaf node, convert string to number and store.
// Sum all path values at the end.
class Solution {
public:
    void path(TreeNode* root, string s, vector<int>& v){
        if(root == NULL) return;
        string a = to_string(root->val);
        if(root->left == NULL && root->right == NULL){
            s = s + a;
            v.push_back(stoi(s));
            return;
        }
        s = s+a;
        path(root->left, s , v);
        path(root->right, s , v);
    }
    int sumNumbers(TreeNode* root) {
        string s;
        vector<int> v;
        path(root, s,v);
        int sum = 0;
        for(int i = 0; i< v.size() ; i++){
            sum = sum + v[i];
        }
        return sum;
    }
};
