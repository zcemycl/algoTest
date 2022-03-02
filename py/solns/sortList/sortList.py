from solns.ListNode.ListNode import *
class Solution:
    def getHalf(self, head):
        if head==None:
            return None
        if head.next==None:
            return head
        prev = None
        while head and head.next:
            if prev==None:
                prev=head
            else:
                prev=prev.next
            head = head.next.next
        mid = prev.next
        prev.next = None
        return mid
    def merge(self, list1,list2):
        res = ListNode()
        ptr = res
        while list1 and list2:
            if list1.val < list2.val:
                ptr.next = list1
                list1 = list1.next
            else:
                ptr.next = list2
                list2 = list2.next
            ptr = ptr.next
        if list1: 
            ptr.next = list1
        else:
            ptr.next = list2
        return res.next
    def sortList(self, head):
        if head == None or head.next == None:
            return head
        mid = self.getHalf(head)
        left = self.sortList(head)
        right = self.sortList(mid)
        return self.merge(left,right)
