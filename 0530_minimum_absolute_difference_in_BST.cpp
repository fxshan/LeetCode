class Solution {
 public:
  void dfs(TreeNode* root, vector<int>& v) {
    if (!root) return;
    v.push_back(root->val);
    dfs(root->left, v);
    dfs(root->right, v);
  }

  int getMinimumDifference(TreeNode* root) {
    vector<int> v;
    int res = INT_MAX;
    dfs(root, v);
    sort(v.begin(), v.end());
    int n = v.size();
    for (int i = 1; i < n; i++) {
      res = min(v[i] - v[i - 1], res);
    }
    return res;
  }
};
