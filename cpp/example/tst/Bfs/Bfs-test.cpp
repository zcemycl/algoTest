#include "Bfs/bfs.h"
#include "gtest/gtest.h"

using namespace std;

class graph0_5{
    public:
        Graph* G = new Graph(6);
        graph0_5(){
            (*this->G).addEdges(0,list<int>{1,2});
            (*this->G).addEdges(1,list<int>{0,3});
            (*this->G).addEdges(2,list<int>{3,4});
            (*this->G).addEdges(3,list<int>{1,2,4,5});
            (*this->G).addEdges(4,list<int>{2,3,5});
            (*this->G).addEdges(5,list<int>{3,4});
        };
};

class bfs_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,string>>{
        protected: graph0_5 G;
};

TEST_P(bfs_MultipleParamsTests, CheckAns){
    list<int>::iterator i;
    for (i=G.G->adj[3].begin();i!=G.G->adj[3].end();++i){
        cout<<*i<<" ";
    }
    cout<<endl;
    int s = get<0>(GetParam());
    string expected = get<1>(GetParam());
    ASSERT_EQ(expected,bfs::naive(G.G,s));
};

INSTANTIATE_TEST_CASE_P(
    BfsTests,
    bfs_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,"012345"),
        make_tuple(3,"312450"),
        make_tuple(1,"103245")
    )
);
