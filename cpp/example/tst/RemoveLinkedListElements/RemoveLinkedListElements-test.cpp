#include "RemoveLinkedListElements/removeLinkedListElements.h"
#include "gtest/gtest.h"

using namespace std;

class removeLinkedListElements_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(removeLinkedListElements_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,removeLinkedListElements::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    RemoveLinkedListElementsTests,
    removeLinkedListElements_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
