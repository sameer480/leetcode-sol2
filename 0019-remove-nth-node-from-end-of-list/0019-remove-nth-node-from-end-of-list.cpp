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
int len(ListNode* head){
    int c=0;
    if(head==NULL){
        return 0;
    }
    while(head!=NULL){
        c++;
        head=head->next;

    }
    return c;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length= len(head);
        ListNode *temp= head;
        ListNode*prev=NULL;
        int k=length-n;
        if(k==0){
            return head->next;
        }
        while(k!=0){
            prev=temp;
            temp=temp->next;
            k--;
        }
        prev->next=temp->next;
        return head;

        
    }
};