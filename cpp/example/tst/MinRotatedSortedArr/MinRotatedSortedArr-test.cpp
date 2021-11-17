#include "MinRotatedSortedArr/minRotatedSortedArr.h"
#include "gtest/gtest.h"

using namespace std;

class minRotatedSortedArr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int>>{
};

TEST_P(minRotatedSortedArr_MultipleParamsTests, CheckAns){
    vector<int> n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,minRotatedSortedArr::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MinRotatedSortedArrTests,
    minRotatedSortedArr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{3,4,5,1,2},1),
        make_tuple(vector<int>{4,5,6,7,0,1,2},0),
        make_tuple(vector<int>{11,13,15,17},11)
    )
);
