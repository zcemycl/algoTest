from solns.ListNode.ListNode import *

class Solution:
    @staticmethod
    def printListNode(l):
        printStr = ""
        while l:
            printStr = str(l.val)+printStr
            l = l.next
        return printStr
    @staticmethod
    def listNode_fromStr(s):
        prev = None
        result = None
        for tmps in s:
            result = ListNode(val=int(tmps),next=prev)
            prev = result
        return result
    @staticmethod
    def recursive(l1,l2):
        if l1 is None:
            return l2
        elif l2 is None:
            return l1
        elif l1.val > l2.val:
            l1.next = Solution.recursive(l1.next,l2)
            return l1
        else:
            l2.next = Solution.recursive(l1,l2.next)
            return l2
