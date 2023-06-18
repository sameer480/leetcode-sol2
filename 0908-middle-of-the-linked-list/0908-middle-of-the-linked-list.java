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
    public ListNode middleNode(ListNode head) {
         ListNode temp=head;
         int cnt=0;
        while(temp!=null){
            temp=temp.next;
            cnt++;
        }
        ListNode fast= head.next;
        ListNode slow= head;
        while(slow!=null){
            if(fast==null||fast.next==null&& cnt%2!=0){
                return slow;
            }else if(fast==null||fast.next==null&& cnt%2==0){
                return slow.next;
            }
            else{
                slow=slow.next;
                fast=fast.next.next;
            }
        }
        if(cnt%2!=0){
        return slow;
        }
        return slow.next;
        
    }
}