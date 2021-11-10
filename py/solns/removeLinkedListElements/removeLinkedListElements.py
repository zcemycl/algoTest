from solns.ListNode.ListNode import *

class Solution:
    @staticmethod
    def naive(head,val):
        prev = ListNode()
        tmp = prev
        while head:
            if (head.val!=val):
                tmp.next = head
                tmp = tmp.next
            else:
                tmp.next = None
            head = head.next
        return prev.next
