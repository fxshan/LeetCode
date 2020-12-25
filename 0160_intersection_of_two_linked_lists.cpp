class Solution {
 public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (!headA || !headB) return NULL;
    ListNode *a = headA, *b = headB;

    while (a != b) {
      a = !a ? headB : a->next;
      b = !b ? headA : b->next;
    }
    return a;
  }
};
