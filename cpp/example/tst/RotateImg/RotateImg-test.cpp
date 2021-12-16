#include "RotateImg/rotateImg.h"
#include "gtest/gtest.h"

using namespace std;

class rotateImg_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(rotateImg_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,rotateImg::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    RotateImgTests,
    rotateImg_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
