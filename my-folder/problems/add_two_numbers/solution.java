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
        // Initialize a new linked list to store the result
        ListNode result = new ListNode();
        // Initialize a node to keep track of the current position in the result list
        ListNode current = result;

        // Initialize carry to 0
        int carry = 0;

        // Loop until both input lists are null
        while (l1 != null || l2 != null) {
            // Get the values of the current nodes in the input lists, or 0 if the list is null
            int x = (l1 != null) ? l1.val : 0;
            int y = (l2 != null) ? l2.val : 0;

            // Calculate the sum of the current nodes, plus the carry from the previous iteration
            int sum = x + y + carry;

            // Update the carry for the next iteration
            carry = sum / 10;

            // Add the ones digit of the sum to the result list
            current.next = new ListNode(sum % 10);
            current = current.next;

            // Move to the next node in the input lists, if they are not null
            if (l1 != null) l1 = l1.next;
            if (l2 != null) l2 = l2.next;
        }

        // If there is a carry left over after both input lists are null, add it to the result list
        if (carry > 0) {
            current.next = new ListNode(carry);
        }

        // Return the result, skipping the first dummy node
        return result.next;
    }
}