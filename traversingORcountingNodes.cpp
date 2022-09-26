int getCount(struct Node* head){
    
        //Code here
        int cnt=1;
        struct Node*node=head;
        while(node->next!=NULL){
          cout<<node->data<<" ";
            node=node->next;
            cnt++;
        }
    return cnt;
    }
