class Solution {
 private:
  ListNode* reverse(ListNode* head) {
    ListNode* prev = nullptr;
    while (head) {
      ListNode* next = head->next;
      head->next = prev;
      prev = head;
      head = next;
    }
    return prev;
  }

 public:
  bool isPalindrome(ListNode* head) {
    if (!head) return true;
    ListNode *slow = head, *fast = head;
    while (fast->next && fast->next->next) {
      fast = fast->next->next;
      slow = slow->next;
    }
    ListNode* head2 = reverse(slow->next);
    ListNode* head1 = head;
    while (head1 && head2) {
      if (head1->val != head2->val) return false;
      head1 = head1->next;
      head2 = head2->next;
    }
    return true;
  }
};
