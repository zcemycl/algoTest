#include "Graph/graph.h"
#include "gtest/gtest.h"

using namespace std;

class graph_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(graph_MultipleParamsTests, CheckAns){
    Graph G(3);
    G.addEdge(1,2);
    G.addEdge(1,10);
    G.addEdges(1,list<int>{3,4,5});
    G.addEdges(2,list<int>{3,4,5});
    cout<<G.V<<endl;
    cout<<G.adj[1].front()<<endl;
    cout<<G.adj[1].back()<<endl;
    cout<<G.adj[2].front()<<endl;
    // cout<<G->adj[1].front()<<endl;
    // ASSERT_EQ(list<int>{2},);
};

INSTANTIATE_TEST_CASE_P(
    GraphTests,
    graph_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
