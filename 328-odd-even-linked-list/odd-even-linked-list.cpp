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
        if(!head) return nullptr;
        vector<int> set;
        ListNode* current = head;
        while(current!=nullptr && current->next!=nullptr){
            set.push_back(current->val);
            current = current->next->next;
        }
        if(current!=nullptr){
            set.push_back(current->val);
        }
        current = head->next;
        while(current!=nullptr && current->next!=nullptr){
            set.push_back(current->val);
            current = current->next->next;
        }
         if(current!=nullptr){
            set.push_back(current->val);
        }
        current = head;
        int i = 0;
        while(current!=nullptr){
            current->val = set[i++];
            current = current->next;
        }

        return head;
    }
};