from solns.ListNode.ListNode import *
class Solution:
    @staticmethod
    def naive(lists):
        if len(lists)==0: return None
        while len(lists)!=1:
            dummy = ListNode()
            tmp = dummy
            l = lists.pop(0) if len(lists)!=0 else None
            r = lists.pop(0) if len(lists)!=0 else None
            while l and r:
                if l.val<=r.val:
                    head = l
                    l = l.next
                    head.next = None
                    tmp.next = head
                else:
                    head = r
                    r = r.next
                    head.next = None
                    tmp.next = head
                tmp = tmp.next
            if l: tmp.next = l
            if r: tmp.next = r
            lists.append(dummy.next)
        return lists[0]
