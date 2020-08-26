/**
 * Definition for a binary tree nde.
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
  vector<vector<int>> levelOrderBottom(TreeNode* root) {
    vector<vector<int>> res;
    if (!root) return res;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
      vector<int> l;
      int n = q.size();
      while (n--) {
        TreeNode* node = q.front();
        q.pop();
        l.push_back(node->val);
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
      }
      res.push_back(l);
    }
    reverse(res.begin(), res.end());
    return res;
  }
};
