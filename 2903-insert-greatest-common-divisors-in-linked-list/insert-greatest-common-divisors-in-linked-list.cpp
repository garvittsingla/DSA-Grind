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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* current = head;
        while(current->next){
            ListNode* nextnode = current->next;
            ListNode* newnode =new ListNode(gcd(current->val,current->next->val),nextnode);
            current->next = newnode;
            current=nextnode;
        }
        return head;
    }
};