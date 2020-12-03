class Solution {
 public:
  void dfs(TreeNode*& root, int& sum) {
    if (!root) return;
    dfs(root->right, sum);
    int a = root->val;
    root->val += sum;
    sum += a;
    dfs(root->left, sum);
  }

  TreeNode* convertBST(TreeNode*& root) {
    int sum = 0;
    dfs(root, sum);
    return root;
  }
};
