class Solution {
 public:
  int dfs(TreeNode* root, int& sum) {
    if (!root) return 0;
    int left = dfs(root->left, sum);
    int right = dfs(root->right, sum);
    sum += abs(left - right);
    return root->val + left + right;
  }

  int findTilt(TreeNode* root) {
    int sum = 0;
    dfs(root, sum);
    return sum;
  }
};
