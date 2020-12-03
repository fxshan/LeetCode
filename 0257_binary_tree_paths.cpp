class Solution {
 public:
  void dfs(TreeNode* root, string s, vector<string>& res) {
    if (!root->left && !root->right) return res.push_back(s);
    if (root->left) {
      dfs(root->left, s + "->" + to_string(root->left->val), res);
    }
    if (root->right) {
      dfs(root->right, s + "->" + to_string(root->right->val), res);
    }
  }

  vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> res;
    if (!root) return res;
    dfs(root, to_string(root->val), res);
    return res;
  }
};
