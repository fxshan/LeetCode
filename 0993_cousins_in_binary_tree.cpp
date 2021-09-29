/**
 * Definition for a binary tree node.
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
  bool isCousins(TreeNode* root, int x, int y) {
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
      int n = q.size();
      bool isexistX = false;
      bool isexistY = false;
      for (int i = 0; i < n; ++i) {
        TreeNode* t = q.front();
        q.pop();
        if (t->val == x) isexistX = true;
        if (t->val == y) isexistY = true;
        if (t->left && t->right)
          if ((t->left->val == x && t->right->val == y) ||
              (t->left->val == y && t->right->val == x))
            return false;
        if (t->left) q.push(t->left);
        if (t->right) q.push(t->right);
      }
      if (isexistX && isexistY) return true;
    }
    return false;
  }
};
