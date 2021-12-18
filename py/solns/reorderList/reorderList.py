from solns.ListNode.ListNode import *
class Solution:
    @staticmethod
    def naive(head):
        if head==None or head.next==None: return head
        first = ListNode(0,ListNode(0,head))
        second = ListNode(0,ListNode(0,head))
        while second!=None:
            first = first.next
            second = second.next
            if second!=None:
                second = second.next
        second = first.next
        first.next = None
        reverse = None
        while second:
            reverse = ListNode(second.val,reverse)
            second = second.next
        first = head
        while first!=None and reverse!=None:
            second = reverse.next
            reverse.next = first.next
            first.next = reverse
            reverse = second
            first = first.next
            if first!=None:
                first = first.next