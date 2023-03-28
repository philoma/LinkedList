#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    // Write your code here
    int c=0;
    Node*p=head;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    
    p=head;
 int pos=(c/2);
    while(pos--){
        p=p->next;
    }
    return p;
}




//slow-fast pointer approach
        
        ListNode*slow=head;
        ListNode*fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
return slow;
