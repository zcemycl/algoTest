#include "SumRoot2LeafNo/sumRoot2LeafNo.h"
#include "gtest/gtest.h"

using namespace std;

class sumRoot2LeafNo_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(sumRoot2LeafNo_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,sumRoot2LeafNo::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    SumRoot2LeafNoTests,
    sumRoot2LeafNo_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
