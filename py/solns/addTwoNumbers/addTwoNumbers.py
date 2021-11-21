class ListNode:
    def __init__(self,val=0,next=None):
        self.val = val
        self.next = next

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
        for tmps in s:
            result = ListNode(val=int(tmps),next=prev)
            prev = result
        return result
    @staticmethod
    def listNode_fromList(arr):
        prev = None
        for element in arr:
            result = ListNode(val=element,next=prev)
            prev = result 
        return result
    @staticmethod
    def naive(l1,l2):
        if not l1 and not l2: return None
        if not l1: return l2
        if not l2: return l1
        result = ListNode()
        tmp = result
        i = 0
        while l1 or l2:
            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0
            remain = tmp.val if tmp else 0
            add = val1+val2+remain
            tmp.val = add%10
            if l1 or l2 :
                tmp.next = ListNode(val=add//10)
                i+=1

            if l1: l1 = l1.next
            if l2: l2 = l2.next
            tmp = tmp.next
            
        tmp = result
        for _ in range(i-1):
            tmp = tmp.next
        if tmp.next.val == 0: tmp.next = None
        return result
    @staticmethod
    def onepass(l1,l2):
        s = 0
        l3 = ListNode()
        tmp = l3
        while (l1 or l2 or s):
            val1 = (l1.val if l1 else 0)
            val2 = (l2.val if l2 else 0)
            s,r = divmod(val1+val2+s,10)
            tmp.next = ListNode(r)
            tmp = tmp.next
            l1 = (l1.next if l1 else None)
            l2 = (l2.next if l2 else None)
        return l3.next