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
int length(ListNode *headA){
    int cnt=0;
    while(headA!=NULL){
        cnt++;
        headA=headA->next;
    }
    return cnt;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL){
            return NULL;
        }
        int d;
       ListNode *ptr1;
       ListNode*ptr2;
       int l1=length(headA);
       int l2=length(headB);
       if(l1>l2){
           d=l1-l2;
           ptr1=headA;
           ptr2=headB;

       }else{
           d=l2-l1;
            ptr1=headB;
            ptr2=headA;
       }
        
        while(d){
            if(ptr1!=NULL){
                ptr1=ptr1->next;
            }
            d--;
        }
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1==ptr2){
               return  ptr1;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return NULL;
    }
};