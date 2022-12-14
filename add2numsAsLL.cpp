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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode*node=new ListNode(0);
        ListNode*temp=node;

        int carry=0;
        while(l1!=NULL||l2!=NULL||carry){

            int s=carry;
            if(l1!=NULL){
                s+=l1->val;
                l1=l1->next;
            }

            if(l2!=NULL){
                s+=l2->val;
                l2=l2->next;
            }

            carry=s/10;
            ListNode*p=new ListNode(s%10);
            temp->next=p;
            temp=temp->next;
        }

        return node->next;
    }
};
