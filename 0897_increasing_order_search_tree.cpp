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
  void dfs(TreeNode* root, TreeNode*& res) {
    if (!root) return;
    dfs(root->left, res);
    res->right = new TreeNode(root->val);
    res = res->right;
    dfs(root->right, res);
  }
  TreeNode* increasingBST(TreeNode* root) {
    TreeNode* temp;
    TreeNode* res = new TreeNode();
    temp = res;
    dfs(root, res);
    return temp->right;
  }
};
