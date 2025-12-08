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
    ListNode* swapPairs(ListNode* head) {
        ListNode* current = head;
        while(current!=nullptr && current->next!=nullptr){
            int currentvalue = current->val;
            int nextvalue;
            if(current->next) nextvalue = current->next->val;
            // if(!nextvalue) break;
            current->val = nextvalue;
            current->next->val = currentvalue;

            current = current->next->next;
        }
        return head;
    }
};