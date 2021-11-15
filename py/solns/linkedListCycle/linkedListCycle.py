from solns.ListNode.ListNode import *
class Solution:
    @staticmethod
    def naive(l):
        s = set()
        while l:
            if id(l) not in s:
                s.add(id(l))
            else:
                return True
            l = l.next
        return False
    @staticmethod
    def oneSpace(l):
        if l is None: return False
        slow = l
        fast = l.next
        while slow!=fast:
            if fast is None or fast.next is None:
                return False
            slow = slow.next
            fast = fast.next.next
        return True