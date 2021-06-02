/**
 * Defnition for a binary tree node.
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
  int Minval(TreeNode* root, int first) {
    if (!root) return -1;
    if (root->val != first) return root->val;
    int left = Minval(root->left, first), right = Minval(root->right, first);
    if (left == -1) return right;
    if (right == -1) return left;
    return min(left, right);
  }
  int findSecondMinimumValue(TreeNode* root) {
    int ans = Minval(root, root->val);
    return ans;
  }
};
