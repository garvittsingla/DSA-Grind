/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
       HashMap<ListNode,Integer> mpp = new HashMap<>();
       ListNode current= headA;
       while(current!=null){
            mpp.put(current,1);
            current = current.next;
       }
       current = headB;
        while(current!=null){
            if(mpp.containsKey(current)){
                return current;
            }
            current = current.next;
       }
       return null;
    }
}