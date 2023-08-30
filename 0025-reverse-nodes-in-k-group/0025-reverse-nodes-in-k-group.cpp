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
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode*temp=NULL;
        ListNode*cur=head;
         ListNode*prev=NULL;
          ListNode*ptr=head;  
          int cnt=0;
          for(int i=0;i<k;i++){
            //   cnt++;
              if(ptr==NULL){
                  return head;
              }
              ptr=ptr->next;
          }
              while(cur!=NULL&&cnt<k){
                  temp=cur->next;
                  cur->next=prev;
                  prev=cur;
                  cur=temp;
                  cnt++;
              }

          if(temp!=NULL){
              head->next=reverseKGroup(temp,k);
          }
    return prev;
        
    }
};