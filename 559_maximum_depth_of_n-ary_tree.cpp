class Solution {
 public:
  int maxDepth(Node* root) {
    int ans = 0;
    if (!root) return ans;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
      int n = q.size();
      ans++;
      while (n--) {
        Node* node = q.front();
        q.pop();
        for (int i = 0; i < node->children.size(); i++)
          q.push(node->children[i]);
      }
    }
    return ans;
  }
};
