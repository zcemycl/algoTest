
import unittest
from parameterized import parameterized as p
from solns.longestCommonSubseq.longestCommonSubseq import *

class UnitTest_LongestCommonSubseq(unittest.TestCase):
    @p.expand([
        ['abcde','ace',3],['abc','def',0],
        ['abc','abc',3],
        ['zzace','abyclle',3],['abyclle','zzace',3],
        ['ezupkr','ubmrapg',2],['bsbininm','jmjkbkjkv',1],
        # ['ylqpejqbalahwr','yrkzavgdmdgtqpg',3],
        # ['mhunuzqrkzsnidwbun','szulspmhwpazoxijwbq',6]
    ])
    def test_naive(self,text1,text2,expected):
        s = Solution()
        self.assertEqual(s.naive(text1,text2),expected)
        # Solution.naive(text1,text2)
    @p.expand([
        ['abcde','ace',3],['abc','def',0],
        ['abc','abc',3],['zzace','abyclle',3],['abyclle','zzace',3],
        ['ezupkr','ubmrapg',2],['bsbininm','jmjkbkjkv',1],
        ['ylqpejqbalahwr','yrkzavgdmdgtqpg',3],
        ['mhunuzqrkzsnidwbun','szulspmhwpazoxijwbq',6]
    ])
    def test_dp(self,text1,text2,expected):
        self.assertEqual(Solution.dp(text1,text2),expected)
