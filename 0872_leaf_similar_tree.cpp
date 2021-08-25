/**
 * Definition for a binarytree node.
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
  void findleaf(TreeNode* root, vector<int>& res) {
    if (!root) return;
    if (!root->right && !root->left) res.push_back(root->val);
    if (root->left) findleaf(root->left, res);
    if (root->right) findleaf(root->right, res);
  }
  bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    vector<int> r1, r2;
    findleaf(root1, r1);
    findleaf(root2, r2);
    return r1 == r2;
  }
};
