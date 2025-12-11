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
        ListNode* dummy =  new ListNode();
        dummy->next = head;
        ListNode* current = head;
        ListNode* ans= dummy;
        int sum = 0;
        while(current!=nullptr){
            int value = current->val;
            if(value!=0){
                sum+=value;
            }else{
                if(sum == 0){
                    current = current->next;
                    continue;
                }
                ListNode * newnode = new ListNode(sum);
                sum = 0;
                ans->next = newnode;
                ans = ans->next;
            }
            current=current->next;
        }
        return dummy->next;
    }
};