class Solution {
 public:
  void deleteNode(ListNode* node) {
    ListNode* d = node->next;
    node->val = d->val;
    node->next = d->next;
  }
};
