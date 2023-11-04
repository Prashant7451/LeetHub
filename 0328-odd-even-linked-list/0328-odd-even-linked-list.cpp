/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
  ListNode list1(0), list2(0);
        ListNode* a1 = &list1;
        ListNode* a2 = &list2;

        unsigned start = 1;
        while (head) {
            if (start++ % 2 == 1)
                a1 = a1->next = head;
            else
                a2 = a2->next = head;
            head = head->next;
        }

        a1->next = list2.next;
        a2->next = nullptr;
        return list1.next;
    }
};