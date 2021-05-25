/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
 public:
  void Traversal(Node* root, vector<int>& res) {
    if (!root) return;
    for (auto child : root->children) {
      Traversal(child, res);
    }
    res.push_back(root->val);
  }
  vector<int> postorder(Node* root) {
    vector<int> res;
    Traversal(root, res);
    return res;
  }
};
