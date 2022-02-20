#include "Find1stAndLastPositionOfElementInSortedArr/find1stAndLastPositionOfElementInSortedArr.h"
#include "gtest/gtest.h"

using namespace std;

class find1stAndLastPositionOfElementInSortedArr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(find1stAndLastPositionOfElementInSortedArr_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,find1stAndLastPositionOfElementInSortedArr::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    Find1stAndLastPositionOfElementInSortedArrTests,
    find1stAndLastPositionOfElementInSortedArr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
