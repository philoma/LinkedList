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
        if(head==NULL) return head;
        ListNode*temp=head;
        int c=0;
        while(temp!=NULL){
            temp=temp->next;
            c++;
             }
        temp=head;
        
        if(c==0||c==1) {head=NULL; return head;}
        c/=2;
        while(c-- >1){
            temp=temp->next;
        }
        
        ListNode*temp2=temp->next;
        temp->next=temp2->next; delete temp2;
        return head;
        
    }
        
        
};
