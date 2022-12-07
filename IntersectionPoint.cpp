/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {

        unordered_map<ListNode*, int>mp;
        while(h1!=NULL){
            mp[h1]=h1->val;
            h1=h1->next;
        }

        while(h2!=NULL){
            if(mp.find(h2)==mp.end()){
                h2=h2->next;
            }else{
                return h2;
            }
        }

       return NULL; 
    }
};





















/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *l1, ListNode *l2) {

        int len1=0,len2=0;
    ListNode* h1=l1,*h2=l2;
    while(h1!=NULL||h2!=NULL){
        if(h1!=NULL){
            len1++;
            h1=h1->next;
        }else{
            len2++;
            h2=h2->next;
        }
    }
    //let's consider len1>len2
    int dif=len1-len2;
    if(dif<0){
        dif=-1*dif;
        swap(l1, l2);
    }
    
    //coming to node from where onwards the length of both ll is same
    
    while(dif--!=0){
        l1=l1->next;
    }
    //now at same length- l1, l2
    while(l1!=l2){
        l1=l1->next;
        l2=l2->next;
    }
    
    if(l2)
       {
           return l2;
       }
       return NULL;
    }
};




















/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *l1, ListNode *l2) {
        
        if(l1==NULL|| l2==NULL) return NULL;

        ListNode*a=l1, *b=l2;

        while(a!=b){
            a=a==NULL ? l2 : a->next;
            b=b==NULL ? l1 : b->next;
        }

        return a;
    }
};
