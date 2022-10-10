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
    
    void reverse(ListNode*s, ListNode*e){
        ListNode*prev=NULL;
        ListNode*cur=s;
        ListNode*nxt=cur->next;
        while(prev!=e){
            cur->next=prev;
            prev=cur;
            cur=nxt;
            if(nxt!=NULL) nxt=nxt->next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL||head->next==NULL||k==1) return head;
        
        ListNode*s=head;
        ListNode*e=head;
        int cnt=k-1;
        while(cnt--){
            e=e->next;
            if(e==NULL) return head;
            
        }
        
        ListNode*nexthead=reverseKGroup(e->next, k);
        reverse(s,e);
        s->next=nexthead;
        return e;
          
        
        
    }
};
