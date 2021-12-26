#include "NaryTreePostorderTraversal/naryTreePostorderTraversal.h"
#include "gtest/gtest.h"

using namespace std;

class naryTreePostorderTraversal_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>>>{
};

TEST_P(naryTreePostorderTraversal_MultipleParamsTests, CheckAns){
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    n1->children.push_back(n3);
    n1->children.push_back(n2);
    n1->children.push_back(n4);
    Node* n5 = new Node(5);
    Node* n6 = new Node(6);
    n3->children.push_back(n5);
    n3->children.push_back(n6);
    vector<int> expected = get<0>(GetParam());
    naryTreePostorderTraversal soln;
    ASSERT_EQ(expected,soln.naive(n1));
};

INSTANTIATE_TEST_CASE_P(
    NaryTreePostorderTraversalTests,
    naryTreePostorderTraversal_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int> {5,6,3,2,4,1})
    )
);
