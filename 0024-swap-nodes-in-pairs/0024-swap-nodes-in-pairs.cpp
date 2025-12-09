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
        ListNode *ans = new ListNode(0);

        ans->next = head;
        ListNode* dummy = ans;
        while(dummy->next!=nullptr && dummy->next->next!=nullptr){
            ListNode *first = dummy->next;
            ListNode *second = dummy -> next -> next;

            first->next= second->next;
            second->next = first;

            dummy->next = second;
            dummy = first;
        }
        return ans->next;
    }
};