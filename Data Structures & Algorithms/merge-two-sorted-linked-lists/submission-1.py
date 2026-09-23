# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        """
        ptr at start on each list
        compare val at node
        if node val in other list is larger
        save next pointer 
        set node
        move pointer of the 
        when we 

        """

        p1, p2 = list1, list2
        head = ListNode()
        tail = head

        while p1 != None and p2 != None:
            if p2.val >= p1.val:
                nxt = p1.next
                tail.next = p1
                p1 = nxt
            else:
                nxt = p2.next
                tail.next = p2
                p2 = nxt
            tail = tail.next
        if p1 != None:
            tail.next =p1
        else: 
            tail.next = p2
        return head.next


