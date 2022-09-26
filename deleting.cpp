void deleteNode(ListNode node) {

  if(node.next==null){
            return ;
        } 
        node.val=node.next.val;
        node.next=node.next.next;
        
    }





//////////
Node* deleteNode(Node *head,int pos)
{
    //Your code here
    Node*node=head;
    if(pos==1){
       head=head->next;
        return head;
    }
    int cnt=1;
    while(cnt< pos-1){
        cnt++;
        node=node->next;
    }
    node->next=node->next->next;
    
    return head;
    
}
