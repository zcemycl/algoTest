from solns.ListNode.ListNode import *
class Solution:
    @staticmethod
    def naive(head):
        res = None
        while head!=None:
            res = ListNode(head.val,res)
            head = head.next
        return res
