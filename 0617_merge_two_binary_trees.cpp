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
  TreeNode* mergeTrees(TreeNode* r1, TreeNode* r2) {
    if (!r1) return r2;
    if (!r2) return r1;

    TreeNode* node = new TreeNode((r1 ? r1->val : 0) + (r2 ? r2->val : 0));
    node->left = mergeTrees(r1->left, r2->left);
    node->right = mergeTrees(r1->right, r2->right);
    return node;
  }
};
