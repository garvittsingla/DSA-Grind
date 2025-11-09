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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode current1 = l1;
        ListNode current2 = l2;
        ListNode dummy = new ListNode();
        ListNode current = dummy;
        int carry = 0;
        while(current1!=null || current2!=null){
            int sum = carry;
            if(current1!=null)  sum+= current1.val;
            if(current2!=null)  sum+= current2.val;
            ListNode nextnode = new ListNode(sum%10);
            current.next = nextnode;
            carry = sum/10;
            if(current1!=null)  current1 = current1.next;
            if(current2!=null)  current2 = current2.next;
            current = current.next;
        }
        if(carry>0){
            ListNode nextnode = new ListNode(carry);
            current.next = nextnode;
        }
        return dummy.next;
    }
}