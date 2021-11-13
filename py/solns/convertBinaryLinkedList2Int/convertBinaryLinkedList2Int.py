from solns.ListNode.ListNode import *

class Solution:
    @staticmethod
    def naive(l):
        result = 0
        while l:
            result = result*2+l.val
            l = l.next
        return result
