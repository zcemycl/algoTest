class ListNode:
    def __init__(self,val=0,next=None):
        self.val = val
        self.next = next
    @staticmethod
    def strForm(val,string,mode="normal"):
        if mode == "reverse":
            return str(val)+string
        else:
            return string+str(val)
    @staticmethod
    def printListNode(l,mode="normal"):
        printStr = ""
        while l:
            printStr = ListNode.strForm(l.val,printStr,mode)
            l = l.next
        return printStr
    @staticmethod
    def listNode_fromStr(s,pos=-1):
        result = ListNode()
        tmp = result
        for i,tmps in enumerate(s):
            tmp.next = ListNode(int(tmps))
            tmp = tmp.next
            if i==pos: need = tmp
        if pos!=-1:
            tmp.next = need
        return result.next
    @staticmethod
    def listNode_fromStrReverse(s):
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