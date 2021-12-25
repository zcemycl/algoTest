#include "ReverseBits/reverseBits.h"
#include "gtest/gtest.h"

using namespace std;

class reverseBits_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<long,long>>{
};

TEST_P(reverseBits_MultipleParamsTests, CheckAns){
    long n = get<0>(GetParam());
    long expected = get<1>(GetParam());
    ASSERT_EQ(expected,reverseBits::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    ReverseBitsTests,
    reverseBits_MultipleParamsTests,
    ::testing::Values(
        make_tuple(43261596,964176192),
        make_tuple(4294967293,3221225471)
    )
);
