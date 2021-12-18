#include "SerialDeserializeBT/serialDeserializeBT.h"
#include "gtest/gtest.h"

using namespace std;

class serialDeserializeBT_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(serialDeserializeBT_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,serialDeserializeBT::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    SerialDeserializeBTTests,
    serialDeserializeBT_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
