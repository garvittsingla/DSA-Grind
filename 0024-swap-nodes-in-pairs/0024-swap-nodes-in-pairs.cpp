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
        ListNode* dummy = new ListNode(-1,head);
        ListNode* ans = dummy;
        // ListNode current = head;
        while(ans->next!=nullptr && ans->next->next!=nullptr){
            ListNode* first = ans->next;
            ListNode* second = ans->next->next;

            first->next = second->next;
            second->next = first;

            ans->next = second;
            ans = first;
        }
        return dummy->next;
    }
};