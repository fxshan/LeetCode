class Solution {
 public:
  int minDepth(TreeNode* root) {
    if (!root) return 0;
    int d = 1;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
      int n = q.size();
      while (n--) {
        TreeNode* node = q.front();
        q.pop();
        if (!node->left && !node->right) return d;
        if (node->right) q.push(node->right);
        if (node->left) q.push(node->left);
      }
      d++;
    }
    return d;
  }
};
