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
    // ListNode* reverse(ListNode* head) {
    //     ListNode* prev = nullptr;
    //     ListNode* curr = head;
    //     while (curr != nullptr) {
    //         ListNode* next = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = next;
    //     }
    //     return prev;
    // }
    
    int length(ListNode* head) {
        int count = 0;
        while (head != nullptr) {
            count++;
            head = head->next;
        }
        return count;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;  // No rotation needed
        }
        
        int len = length(head);
        k %= len;  // Adjust k if it is greater than the length
        
        if (k == 0) {
            return head;  // No rotation needed
        }
        
        ListNode* temp = head;
        int n = len - k;
        ListNode* prev = nullptr;
        int i = 0;
        while (temp != nullptr && i != n) {
            prev = temp;
            temp = temp->next;
            i++;
        }
        
        prev->next = nullptr;
        ListNode*newh=temp;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        head=newh;
        return head;
    }
};
