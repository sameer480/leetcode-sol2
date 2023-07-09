class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        // Find the meeting point of the slow and fast pointers
        while (slow != NULL && fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                break; // Cycle found
            }
        }

        // If no cycle exists, return NULL
        if (slow != fast) {
            return NULL;
        }

        // Reset slow pointer to head and move both pointers at the same pace until they meet
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow; // Return the starting point of the cycle
    }
};
