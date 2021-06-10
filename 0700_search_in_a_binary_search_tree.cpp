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
  void traversal(TreeNode* root, int val, TreeNode*& res) {
    if (!root) return;
    if (root->val == val) res = root;
    traversal(root->left, val, res);
    traversal(root->right, val, res);
    return;
  }
  TreeNode* searchBST(TreeNode* root, int val) {
    TreeNode* res = NULL;
    traversal(root, val, res);
    return res;
  }
};
