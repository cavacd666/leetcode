// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

using namespace std;

class Solution {
 public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *p1 = l1;
    ListNode *p2 = l2;
    ListNode *res = new ListNode(0);
    ListNode *p = res;
    ListNode *pre;
    int tmp = 0;
    while (p1 || p2) {
      int a1 = p1 ? p1->val : 0;
      int a2 = p2 ? p2->val : 0;
      tmp = p->val;
      p->val = (a1 + a2 + tmp) % 10;
      p->next = new ListNode((a1 + a2 + tmp) / 10);
      pre = p;
      p = p->next;

      p1 = p1 ? p1->next : nullptr;
      p2 = p2 ? p2->next : nullptr;
    }

    if (p->val == 0) {
      delete pre->next;
      pre->next = nullptr;
    }
    return res;
  }
};
