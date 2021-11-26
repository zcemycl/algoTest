using System;
using Xunit;
using Sample.Graph;
using System.Collections.Generic;
using System.Linq;

namespace Sample.Tests{
    public class UnitTest_Graph{
        [Theory]
        [InlineData(4)]
        public void checkResult(int n){
            graph g = new graph(n);
            Console.WriteLine(g.V);
            g.addEdge(1,2);
            g.addEdge(1,10);
            g.addEdges(1,new List<int>{3,4,5});
            g.addEdges(3,new List<int>{3,4,5});
            Assert.Equal(new List<int>{3,4,5},g.adj[3]);
        }
    }
}
