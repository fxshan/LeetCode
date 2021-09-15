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
  int rangeSumBST(TreeNode* root, int l, int h) {
    if (!root) return 0;
    if (root->val < l) return rangeSumBST(root->right, l, h);
    if (root->val > h) return rangeSumBST(root->left, l, h);
    return root->val + rangeSumBST(root->left, l, h) +
           rangeSumBST(root->right, l, h);
  }
};
