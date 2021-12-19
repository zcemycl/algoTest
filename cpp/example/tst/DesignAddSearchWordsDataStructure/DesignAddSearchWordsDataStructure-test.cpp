#include "DesignAddSearchWordsDataStructure/designAddSearchWordsDataStructure.h"
#include "gtest/gtest.h"

using namespace std;

class designAddSearchWordsDataStructure_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(designAddSearchWordsDataStructure_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,designAddSearchWordsDataStructure::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    DesignAddSearchWordsDataStructureTests,
    designAddSearchWordsDataStructure_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
