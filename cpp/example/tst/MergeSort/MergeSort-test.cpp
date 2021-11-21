#include "MergeSort/mergeSort.h"
#include "gtest/gtest.h"

using namespace std;

class mergeSort_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(mergeSort_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,mergeSort::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MergeSortTests,
    mergeSort_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
