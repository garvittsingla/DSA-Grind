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
    ListNode* reverse(ListNode *head,int elements){
        ListNode* prev = NULL;
        ListNode* current = head;
        while(current!=nullptr && elements--){
            ListNode* togo = current -> next;
            current->next = prev;
            prev = current;
            current= togo;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int size = 0;
        ListNode* current = head;
        int elements = right - left + 1;
        if(elements == 1 ) return head;
        if(left == right) return head;
        ListNode* leftprev = nullptr;
        ListNode* rightnext = nullptr;
        ListNode* rightnode = nullptr;
        ListNode* leftnode = nullptr;
        while(current!=nullptr){
            size++;
            if(size == left -1 ){
                leftprev = current;
            }
            if(size == left){
                leftnode = current;
            }
            if(size == right){
                rightnode = current;
            }
            if(size == right+1){
                rightnext = current;
            }

            current = current->next;
        }

        if(left == 1 && right == size){
            return reverse(head,size); //full linked list
        }

        if(left == 1){
            ListNode* newhead = reverse(head,elements);
            leftnode->next = rightnext;
            return newhead;
        }

        if(right == size){
            ListNode* newhead = reverse(leftprev->next,elements);
            leftprev ->next = newhead;
            return head;
        }


        ListNode* newhead = reverse(leftprev->next,elements);
        leftprev -> next = newhead;
        leftnode -> next = rightnext;
        return head;




    }
};