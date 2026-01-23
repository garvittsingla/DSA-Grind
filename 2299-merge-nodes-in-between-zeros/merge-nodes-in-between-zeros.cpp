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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        ListNode *ans = dummy;

        ListNode* current = head;
        int sum = 0;
        while(current!=nullptr){
            if(current->val == 0 && sum!=0){
                ListNode *newnode= new ListNode(sum);
                ans->next = newnode;
                ans =ans->next;
                sum = 0;
            }else{
                sum += current->val;
        }
        current = current->next;
        }
        return dummy->next;
    }
};