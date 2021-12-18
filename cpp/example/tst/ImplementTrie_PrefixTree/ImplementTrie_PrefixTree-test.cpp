#include "ImplementTrie_PrefixTree/implementTrie_PrefixTree.h"
#include "gtest/gtest.h"

using namespace std;

class implementTrie_PrefixTree_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(implementTrie_PrefixTree_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,implementTrie_PrefixTree::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ImplementTrie_PrefixTreeTests,
    implementTrie_PrefixTree_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
