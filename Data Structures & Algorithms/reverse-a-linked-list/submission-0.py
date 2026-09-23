# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        """

        so basically for this problem what we want to do is we we set up 2ptrs prev and curr

        we take current = to the head and prev as null. then what we do is we make prev = curr and point curr to the next node and we make curr.next point towards previous.
        we essentially keep iterating this process until we reach the stage where curr = null

        """

        prev, curr = None, head

        while curr:
            nxt = curr.next
            curr.next = prev
            prev = curr
            curr = nxt
        return prev

