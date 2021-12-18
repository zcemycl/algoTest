using System;
using Xunit;
using Sample.ImplementTrie_PrefixTree;

namespace Sample.Tests{
    public class UnitTest_ImplementTrie_PrefixTree{
        [Theory]
        [InlineData(0,0)]
        public void checkResult(int n,int expected){
            Assert.Equal(expected,implementTrie_PrefixTree.naive(n));
        }
    }
}
