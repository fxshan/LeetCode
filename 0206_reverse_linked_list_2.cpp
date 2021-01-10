class Solution {
 public:
  ListNode* reverseList(ListNode* head) { return reverse(head, NULL); }
  ListNode* reverse(ListNode* cur, ListNode* newhead) {
    if (!cur) return newhead;

    ListNode* next = cur->next;
    cur->next = newhead;
    return reverse(next, cur);
  }
};
