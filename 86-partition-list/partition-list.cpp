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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = nullptr;
        ListNode* greater = nullptr;
        ListNode* g = nullptr;
        ListNode* s = nullptr;

        ListNode* current = head;
        while(current!=nullptr){
            int value = current->val;
            ListNode* togo = current->next;
            current->next = nullptr;
            if(value < x){
                if(small == nullptr){
                    small = current;
                    s = small;
                }else{
                    s->next = current;
                    s = s->next;
                }
            }else{
                if(greater == nullptr){
                    greater = current;
                    g = greater;
                }else{
                    g->next = current;
                    g = g->next;
                }
            }
            current = togo;
        }

        if(small == nullptr) return greater;
        s->next = greater;
        return small;

    }
};