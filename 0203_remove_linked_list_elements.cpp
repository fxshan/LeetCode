class Solution {
 public:
  ListNode* removeElements(ListNode* head, int val) {
    if (!head) return NULL;
    ListNode* curr = new ListNode(-1, head);
    head = curr;
    while (curr->next) {
      if (curr->next->val == val)
        curr->next = curr->next->next;
      else
        curr = curr->next;
    }
    return head->next;
  }
};
