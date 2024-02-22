/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return false;
        
        ListNode *slow=head;
        ListNode *fast=head->next->next;
        
        while( fast!=NULL && fast->next!=NULL ){
            if(slow==fast)
                return true;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return false;
    }
};