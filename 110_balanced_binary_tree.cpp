class Solution {
 public:
  int dfs(TreeNode* root, bool& balanced) {
    if (!root) return 0;
    int left = dfs(root->left, balanced);
    int right = dfs(root->right, balanced);
    if (abs(left - right) > 1) balanced = false;
    return max(left, right) + 1;
  }

  bool isBalanced(TreeNode* root) {
    bool balanced = true;
    dfs(root, balanced);
    return balanced;
  }
};
