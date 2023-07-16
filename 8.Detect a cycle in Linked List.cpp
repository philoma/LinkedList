class Solution {
public:

//1st- by using hash table
//2nd- slow-fast pointer approact
    bool hasCycle(ListNode *h) {
        if(h==NULL) return 0;
    ListNode*fast=h, *slow=h;
    
    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow) return 1;
    }
    
    return 0;
        
    }
};
