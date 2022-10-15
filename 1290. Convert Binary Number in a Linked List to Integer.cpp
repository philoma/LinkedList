/**
 * Definition for singly-linked list.
 * struct ListNode  {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int len=0;
        ListNode*p=head;
        while(p!=NULL) {p=p->next; len++;}
        p=head; int s=0;
        for(int i=len-1;i>=0;i--){
            int num=p->val;
            s+=num*pow(2,i);
            p=p->next;
        }
        return s;
    }
};
