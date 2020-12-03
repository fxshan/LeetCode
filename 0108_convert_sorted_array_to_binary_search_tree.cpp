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
  TreeNode* sortedArrayToBST(vector<int>& a) {
    if (a.empty()) return NULL;
    int n = a.size();
    if (n == 1) return new TreeNode(a[0]);
    if (n == 2) return new TreeNode(a[1], new TreeNode(a[0]), NULL);
    TreeNode* root = new TreeNode(a[n / 2]);
    vector<int> left(a.begin(), a.begin() + n / 2);
    vector<int> right(a.begin() + n / 2 + 1, a.end());
    root->left = sortedArrayToBST(left);
    root->right = sortedArrayToBST(right);
    return root;
  }
};
