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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        if(list1 == nullptr && list2 == nullptr) return NULL;
        ListNode *dummy = new ListNode();
        ListNode* current = dummy;
        while(l1!=nullptr && l2 !=nullptr){
            int value = 0;
            if(l1->val >= l2->val){
                value = l2->val;
                l2=l2->next;
            }else{
                value = l1->val;
                l1=l1->next;

            }
            ListNode* newnode = new ListNode(value);
            current->next = newnode;
            current = current->next;
        }
        while(l1!=nullptr){
            int value = l1->val;
            l1=l1->next;
            ListNode* newnode = new ListNode(value);
            current->next = newnode;
            current = current->next;
        }
         while(l2!=nullptr){
            int value = l2->val;
            l2=l2->next;
            ListNode* newnode = new ListNode(value);
            current->next = newnode;
            current = current->next;
        }
        return dummy->next;

    }
};