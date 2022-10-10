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
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL) return NULL;
        
        
        ListNode*prev=NULL;
        ListNode*cur=head;
        ListNode*nxt=cur->next;
        
        while(cur!=NULL){
            cur->next=prev;
            prev=cur;
            cur=nxt;
            if(nxt!=NULL) nxt=nxt->next;
            
        }
     
        return prev;
    }
};
