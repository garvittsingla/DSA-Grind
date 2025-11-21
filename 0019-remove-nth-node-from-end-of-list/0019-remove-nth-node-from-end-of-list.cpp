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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode *current= head;
        while(current!=NULL){
            count++;
            current = current->next;
        }
        int tobedeleted = count - n;
        if(count == n) return head->next;
        current = head;
        while(tobedeleted!=1){
            current = current->next;
            tobedeleted--;
        }
        ListNode* nextnode = current->next->next;
        current->next = nextnode;
        return head;
    }
};