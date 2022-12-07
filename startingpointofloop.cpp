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
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow=head, *fast=head, *p=head;;
    if(head==NULL) return head;
    
    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        
        if(fast==slow){
            while(p!=slow){
                p=p->next;
                slow=slow->next;
            } return slow;
        }
        
        
    }
    
    return NULL;
        
    }
};

//sc=1, tc=n
