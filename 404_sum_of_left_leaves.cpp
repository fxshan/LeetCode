class Solution {
 public:
  void dfs(TreeNode* root, bool is_left, int& res) {
    if (!root->left && !root->right && is_left == true) res += root->val;
    if (root->left) dfs(root->left, true, res);
    if (root->right) dfs(root->right, false, res);
  }

  int sumOfLeftLeaves(TreeNode* root) {
    if (!root) return 0;
    int res = 0;
    dfs(root, false, res);
    return res;
  }
};
