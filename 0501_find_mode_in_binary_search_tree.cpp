class Solution {
 public:
  void dfs(TreeNode* root, unordered_map<int, int>& mp, int& best) {
    if (!root) return;
    mp[root->val]++;
    best = max(best, mp[root->val]);
    dfs(root->left, mp, best);
    dfs(root->right, mp, best);
  }

  vector<int> findMode(TreeNode* root) {
    unordered_map<int, int> mp;
    int best = INT_MIN;
    dfs(root, mp, best);
    vector<int> res;
    for (auto& p : mp) {
      if (p.second == best) res.push_back(p.first);
    }
    return res;
  }
};
