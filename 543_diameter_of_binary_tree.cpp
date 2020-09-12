class Solution {
 public:
  int dfs(TreeNode* root, int& res) {
    if (!root) return 0;
    int l1 = dfs(root->left, res);
    int l2 = dfs(root->right, res);
    res = max(res, l1 + l2);
    return max(l1, l2) + 1;
  }

  int diameterOfBinaryTree(TreeNode* root) {
    int res = 0;
    dfs(root, res);
    return res;
  }
};
