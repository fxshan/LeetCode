class Solution {
 public:
  bool compare(TreeNode* root, TreeNode* t) {
    if (!root && !t) return true;
    if (!root || !t) return false;
    if (root->val != t->val) return false;
    return compare(root->left, t->left) && compare(root->right, t->right);
  }

  bool isSubtree(TreeNode* s, TreeNode* t) {
    if (!s) return false;
    if (compare(s, t)) return true;
    return isSubtree(s->left, t) || isSubtree(s->right, t);
  }
};
