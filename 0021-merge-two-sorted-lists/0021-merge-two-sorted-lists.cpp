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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL){
            return NULL;
        }
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        ListNode* h=NULL;
        ListNode*t=NULL;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                if(h==NULL){
                    h=t=list1;

                }else{
                    t->next=list1;
                    t=t->next;
                }
                list1=list1->next;
            }else{
                if(h==NULL){
                    h=t=list2;
                }else{
                    t->next=list2;
                    t=t->next;
                }
                list2=list2->next;
            }
        }
        if(list1!=NULL){
        
            t->next=list1;
        }
        if(list2!=NULL){
           t->next=list2;
        }
        return h;
        
    }
};