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
    ListNode* deleteMiddle(ListNode* head) {
        int flag=1;
        ListNode* first=head;
        if (head->next==NULL) return NULL;
        ListNode* second=head->next;
        if(second->next==NULL)
        {
            first->next=NULL;
            return head;
        } 
        ListNode* x=NULL;
        while(second && second->next) 
        {
            second=second->next->next;
            x=first;
            first=first->next;
        }
        if(second==NULL)
        { 
         x->next=first->next;
            }
        else if(second->next==NULL)
        {
         first->next=first->next->next;
            
            
        }
            
        return head;

        
        
        
        
        
        
        
        
        
        
    }
};