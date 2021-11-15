from solns.ListNode.ListNode import *
class Solution:
    @staticmethod
    def naive(l):
        s = set()
        while l:
            if id(l) not in s:
                s.add(id(l))
            else:
                return l
            l = l.next
        return None
