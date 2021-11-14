#include "DuplicateEmails/duplicateEmails.h"
#include "gtest/gtest.h"

using namespace std;

class duplicateEmails_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<string>>{
};

TEST_P(duplicateEmails_MultipleParamsTests, CheckAns){
    string expected = get<0>(GetParam());
    ASSERT_EQ(expected,duplicateEmails::naive());
};

INSTANTIATE_TEST_CASE_P(
    DuplicateEmailsTests,
    duplicateEmails_MultipleParamsTests,
    ::testing::Values(
        make_tuple("a@b.com")
    )
);
