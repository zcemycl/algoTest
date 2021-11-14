#include "DuplicateEmails/duplicateEmails.h"
#include "gtest/gtest.h"

using namespace std;

class duplicateEmails_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(duplicateEmails_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,duplicateEmails::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    DuplicateEmailsTests,
    duplicateEmails_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
