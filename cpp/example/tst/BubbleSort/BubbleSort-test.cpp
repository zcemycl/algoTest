#include "BubbleSort/bubbleSort.h"
#include "gtest/gtest.h"

using namespace std;

class bubbleSort_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(bubbleSort_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,bubbleSort::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    BubbleSortTests,
    bubbleSort_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
