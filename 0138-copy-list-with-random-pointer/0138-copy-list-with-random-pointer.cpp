/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
         if (!head) {
            return nullptr;
        }
        
        std::unordered_map<Node*, Node*> nodeMap; // Maps original nodes to their cloned nodes
        
        // Create cloned nodes and populate the nodeMap
        Node* curr = head;
        while (curr) {
            nodeMap[curr] = new Node(curr->val);
            curr = curr->next;
        }
        
        // Adjust the next and random pointers of cloned nodes
        curr = head;
        while (curr) {
            nodeMap[curr]->next = nodeMap[curr->next];
            nodeMap[curr]->random = nodeMap[curr->random];
            curr = curr->next;
        }
        
        return nodeMap[head];
        
    }
};