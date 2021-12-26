#include "NaryTreePreorderTraversal/naryTreePreorderTraversal.h"
#include "gtest/gtest.h"

using namespace std;

class naryTreePreorderTraversal_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>>>{
};

TEST_P(naryTreePreorderTraversal_MultipleParamsTests, CheckAns){
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
    naryTreePreorderTraversal soln;
    ASSERT_EQ(expected,soln.naive(n1));
};

INSTANTIATE_TEST_CASE_P(
    NaryTreePreorderTraversalTests,
    naryTreePreorderTraversal_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int> {1,3,5,6,2,4})
    )
);
