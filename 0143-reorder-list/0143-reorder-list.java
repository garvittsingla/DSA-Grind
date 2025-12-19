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
    public ListNode reverse(ListNode head){
        ListNode prev = null;
        ListNode current = head;
        while(current!=null){
            ListNode togo = current.next;
            current.next = prev;
            prev = current;
            current = togo;
        }
        return prev;
    }
    public void reorderList(ListNode head) {
        //first find the middle of linked list
        // 1 2 3 4 5 6 7 null -> 4 is mid (4 will come at last,5 will will be second last so reverse will be from mid+1)
        //1 2 3 4 5 6 null -> (same as previous case)

        ListNode slow = head;
        ListNode fast= head;
        while(fast!=null && fast.next!=null){
            slow= slow.next;
            fast = fast.next.next;
        }
        ListNode tobereversed = slow.next;
        slow.next = null;
        slow = reverse(tobereversed);
        // slow = slow.next; //prev pointer
        // slow.next = null;
        fast = head; // first pointer
        while(fast!=null && slow!=null){
           ListNode fasttogo = fast.next;
           ListNode slowtogo = slow.next;
           fast.next = slow;
           slow.next = fasttogo;
           fast = fasttogo;
           slow = slowtogo;
        }
        
    }
}