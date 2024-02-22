/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}T
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL || head->next==NULL)return head;
        
        struct ListNode *tmp=head,*tmp2=head->next,*ptr;
        
        while(tmp2!=NULL){
            ptr=tmp2->next;
            tmp2->next=tmp;
            tmp=tmp2;
            tmp2=ptr;
        }
        head->next=NULL;
        return tmp;
    }
};