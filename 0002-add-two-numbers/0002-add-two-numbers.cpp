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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* dummy = new ListNode();
        ListNode* ans= dummy;
        while(p1 != nullptr || p2!=nullptr){
            int sum = carry;
            if(p1) {
                sum+= p1->val;
                p1 = p1->next;
            };
            if(p2){
                sum+= p2->val;
                p2 = p2->next;
            };

            ListNode* newnode = new ListNode(sum%10);
            carry = sum/10;
            ans->next = newnode;
            ans = newnode;

        }
        if(carry){
              ListNode* newnode = new ListNode(carry);
              ans->next = newnode;
        }
        return dummy->next;
    }
};