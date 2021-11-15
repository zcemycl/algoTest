#include "TenthLine/tenthLine.h"
#include "gtest/gtest.h"

using namespace std;

class tenthLine_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<string>>{
};

TEST_P(tenthLine_MultipleParamsTests, CheckAns){
    string expected = get<0>(GetParam());
    // ASSERT_EQ(expected,tenthLine::naive());
    ASSERT_EQ(expected,tenthLine::linuxCMD());
};

INSTANTIATE_TEST_CASE_P(
    TenthLineTests,
    tenthLine_MultipleParamsTests,
    ::testing::Values(
        make_tuple("Line 10")
    )
);
