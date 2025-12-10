/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeNodes(ListNode head) {
        ListNode current = head;
        ListNode dummy = new ListNode(10);
        ListNode ans = dummy;
        int sum = 0;
        while(current!=null){
            int value = current.val;
            if(value!=0){
                sum+=value;
            }else{
                if(sum ==0) {
                    current=current.next;
                    continue;
                };
                ListNode newnode = new ListNode(sum);
                ans.next = newnode;
                sum = 0;
                ans = ans.next;
            }
        current = current.next;
        }
        return dummy.next;
    }
}