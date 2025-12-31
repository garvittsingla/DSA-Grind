/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int> mpp;
        ListNode* current = head;
        while(current!=nullptr){
            if(mpp.find(current)!=mpp.end()){
                return true;
            }
            mpp[current] = 1;
            current = current->next;
        }
        return false;
    }
};