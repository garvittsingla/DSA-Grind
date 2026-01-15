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
    ListNode* reverse(ListNode* head, int k){
    ListNode* current = head;
    ListNode* prev = nullptr;
    while(k-- > 0 && current!= nullptr){
        ListNode* next = current->next;
        current->next= prev;
        prev = current;
        current = next;
    }
    return prev;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k==0 || !head->next) return head;
        int length = 0;
        ListNode* current = head;
        while(current!=nullptr){
            length++;
            current = current->next;
        }
        if(length == k) return head;
        k = k%length;
        if(k==0) return head;
        ListNode* fullrev = reverse(head,length);
        current = fullrev;
        for(int i = 1 ; i < k ; i++){
            current = current->next;
        }

        ListNode* secondpart = current->next;
        current->next = nullptr;
        ListNode* newhead = reverse(fullrev,k);
        ListNode* backrev = reverse(secondpart,length-k);
        current = newhead;
        while(current->next) current=current->next;
        current->next=backrev;
        return newhead;
    }
};