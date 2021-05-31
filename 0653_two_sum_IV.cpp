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
  void Traversal(TreeNode* root, int k, bool& b, map<int, int>& mp) {
    if (mp.count(root->val)) b = true;
    mp[k - root->val] = root->val;
    if (root->left) Traversal(root->left, k, b, mp);
    if (root->right) Traversal(root->right, k, b, mp);
  }
  bool findTarget(TreeNode* root, int k) {
    map<int, int> mp;
    bool b = false;
    Traversal(root, k, b, mp);
    return b;
  }
};
