#include "TopKFrequentElements/topKFrequentElements.h"
#include "gtest/gtest.h"

using namespace std;

class topKFrequentElements_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(topKFrequentElements_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,topKFrequentElements::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    TopKFrequentElementsTests,
    topKFrequentElements_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
