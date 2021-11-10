from solns.ListNode.ListNode import *

class Solution:
    @staticmethod
    def naive(head):
        s = dict()
        tmp = head
        while tmp:
            if tmp.val not in s: 
                s[tmp.val]=1
            else:
                s[tmp.val]+=1
            tmp = tmp.next
        prev = ListNode(0,None)
        tmp = prev
        while head:
            if s[head.val]==1:
                tmp.next = head
                tmp = tmp.next
            else:
                tmp.next = None
            head = head.next
        return prev.next

