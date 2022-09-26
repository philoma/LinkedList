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
    //cout<<"ok "<<c<<" ok ";
    p=head;
 int pos=(c/2)+1;
    for(int i=1;i<pos;i++){
        p=p->next;
    }
    return p;
}
