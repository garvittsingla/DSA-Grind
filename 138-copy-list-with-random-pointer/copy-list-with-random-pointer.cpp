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
        Node* dummy = new Node(-1);
        Node* ans = dummy;
        Node* current = head;
        unordered_map<Node*,Node*> mpp;
        while(current!=nullptr){
            Node* newnode = new Node(current->val);
            mpp[current] = newnode;
            ans->next = newnode;
            ans = ans->next;
            current = current -> next;
        }

        current = head;
        ans = dummy->next;
        while(current!=nullptr){
            Node* randomptr = mpp[current->random];
            ans->random = randomptr;
            ans = ans->next;
            current = current->next;
        }

        return dummy->next;
    }
};