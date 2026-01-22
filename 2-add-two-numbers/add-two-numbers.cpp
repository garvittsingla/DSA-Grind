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
    void add(ListNode* p1,ListNode* p2,int carry,ListNode* current){
        //base case
        if(carry == 0 && p2 == NULL && p1==NULL) return;

        int sum = carry;
        if(p1) sum+=p1->val;
        if(p2) sum+=p2->val;
        if(sum>9){
            carry = sum/10;
        }else{
            carry = 0;
        }
        ListNode* newnode = new ListNode(sum%10);
        current->next = newnode;
        if(!p1 && p2){
            add(NULL,p2->next,carry,newnode);
            return;
        }
        if(!p2 && p1){
              add(p1->next,NULL,carry,newnode);
              return;
        }

        if(!p1 && !p2){
            add(NULL,NULL,carry,newnode);
            return;
        }
        add(p1->next,p2->next,carry,newnode);

    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* ans = new ListNode(-1);
        ListNode* current = ans;
        add(p1,p2,0,current);
        return ans->next;
    }
};