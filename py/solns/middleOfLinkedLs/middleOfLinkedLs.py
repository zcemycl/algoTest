from solns.ListNode.ListNode import *
class Solution:
    @staticmethod
    def naive(head):
        n = 0
        tmp = head
        while tmp:
            n+=1
            tmp = tmp.next
        target = n//2+n%2
        tmp = head
        while tmp:
            if n==target: return tmp
            n-=1
            tmp = tmp.next
