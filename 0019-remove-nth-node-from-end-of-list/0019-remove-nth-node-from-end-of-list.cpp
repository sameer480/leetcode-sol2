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
int len(ListNode*head){
    int c=0;
    while(head!=NULL){
        c++;
        head=head->next;

    }
    return c;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=len(head);
         if (n > length) {
            return head;
        }
        
        int c = 0;
        ListNode* temp = head;
        ListNode* prev = NULL;
        
        // Traverse to the node before the one we want to remove.
        while (c != length - n) {
            prev = temp;
            temp = temp->next;
            c++;
        }
        
        // If the node to remove is the head itself.
        if (!prev) {
            head = head->next;
        } else {
            prev->next = temp->next;
        }
        
        delete temp;
        return head;


        
    }
};