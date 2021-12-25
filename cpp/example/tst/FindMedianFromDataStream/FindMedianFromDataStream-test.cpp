#include "FindMedianFromDataStream/findMedianFromDataStream.h"
#include "gtest/gtest.h"

using namespace std;

class findMedianFromDataStream_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(findMedianFromDataStream_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,findMedianFromDataStream::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    FindMedianFromDataStreamTests,
    findMedianFromDataStream_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
