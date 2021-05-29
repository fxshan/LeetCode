/**
 * Defintion for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
 public:
  vector<double> averageOfLevels(TreeNode* root) {
    vector<double> res;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
      int n = q.size();
      long long val = 0;
      for (int i = 0; i < n; i++) {
        TreeNode* t = q.front();
        q.pop();
        if (t->left) q.push(t->left);
        if (t->right) q.push(t->right);
        val += t->val;
      }
      res.push_back((double)val / n);
    }
    return res;
  }
};
