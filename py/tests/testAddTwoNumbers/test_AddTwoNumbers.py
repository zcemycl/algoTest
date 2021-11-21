import unittest
from solns.wrapper import *
from solns.addTwoNumbers.addTwoNumbers import *

class TestCase(unittest.TestCase):
    @timeit
    def test_naive_None_None(self):
        self.assertEqual(Solution.naive(None,None),None)
    @timeit
    def test_naive_None_LinkedList(self):
        inp = ListNode(val=1)
        result = Solution.naive(None,inp)
        self.assertEqual(result.val,inp.val)
        self.assertEqual(result.next,inp.next)
    @timeit
    def test_naive_1546_124(self):
        inp1 = Solution.listNode_fromStr('1546')
        inp2 = Solution.listNode_fromList([1,2,4])
        result = Solution.naive(inp1,inp2)
        s1 = Solution.printListNode(inp1)
        s2 = Solution.printListNode(inp2)
        s3 = Solution.printListNode(result)
    @timeit
    def test_naive_9_9(self):
        inp1 = Solution.listNode_fromStr('9')
        inp2 = inp1
        result = Solution.naive(inp1,inp2)
        s1 = Solution.printListNode(inp1)
        s2 = Solution.printListNode(inp2)
        s3 = Solution.printListNode(result)
    @timeit
    def test_naive_10_10(self):
        inp1 = Solution.listNode_fromStr('10')
        inp2 = inp1
        result = Solution.naive(inp1,inp2)
        s1 = Solution.printListNode(inp1)
        s2 = Solution.printListNode(inp2)
        s3 = Solution.printListNode(result)
    @timeit
    def test_naive_2000_20(self):
        inp1 = Solution.listNode_fromStr('2000')
        inp2 = Solution.listNode_fromStr('20')
        result = Solution.naive(inp1,inp2)
        s1 = Solution.printListNode(inp1)
        s2 = Solution.printListNode(inp2)
        s3 = Solution.printListNode(result)
    @timeit
    def test_naive_2000_20(self):
        inp1 = Solution.listNode_fromStr('2080')
        inp2 = Solution.listNode_fromStr('20')
        result = Solution.naive(inp1,inp2)
        s1 = Solution.printListNode(inp1)
        s2 = Solution.printListNode(inp2)
        s3 = Solution.printListNode(result)
    @timeit
    def test_onepass_9_9(self):
        inp1 = Solution.listNode_fromStr('9')
        inp2 = inp1
        result = Solution.onepass(inp1,inp2)
