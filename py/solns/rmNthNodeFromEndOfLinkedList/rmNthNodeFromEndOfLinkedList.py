from solns.ListNode.ListNode import *
class Solution:
    @staticmethod
    def naive(head,n):
        dummy = ListNode(0,head)
        length = 0
        tmp = head
        while tmp:
            length+=1
            tmp = tmp.next
        tmp = dummy
        length-=n
        while length:
            tmp = tmp.next
            length-=1
        tmp.next = tmp.next.next
        return dummy.next
