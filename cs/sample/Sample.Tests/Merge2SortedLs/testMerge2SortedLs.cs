using System; 
using Sample.Merge2SortedLs;
using Xunit;
using Sample.ListNode;

namespace Sample.Tests{
    public class UnitTest_Merge2SortedLs{
        [Theory]
        [InlineData("124","134","112344")]
        [InlineData("","","")]
        [InlineData("1","","1")]
        public void checkResult(string n1,string n2,string expected){
            listNode l1=merge2SortedLs.listNode_fromStr(n1);
            listNode l2=merge2SortedLs.listNode_fromStr(n2);
            listNode l3=merge2SortedLs.recursive(l1,l2);
            string n3=merge2SortedLs.printListNode(l3);
            Assert.Equal(expected,n3);
        }
    }

}