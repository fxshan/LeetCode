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
  int sumRootToLeaf(TreeNode* root, int res = 0) {
    if (!root) return 0;
    res = res * 2 + root->val;
    return root->left == root->right ? res
                                     : sumRootToLeaf(root->left, res) +
                                           sumRootToLeaf(root->right, res);
  }
};
