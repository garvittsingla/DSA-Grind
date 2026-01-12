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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* evenhead = head->next;
        ListNode* even = evenhead;
        ListNode* current = head;
        while(even!=nullptr && even->next!=nullptr){
            current->next = even->next;
            current = current->next;
            if(current) {
                even->next = current->next;
                even = even->next;
                };
             
        }
        current->next = evenhead;
        return head;
    }
};